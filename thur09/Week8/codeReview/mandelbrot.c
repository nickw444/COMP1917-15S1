/*
 *  bmpServer.c
 *  1917 serve that 3x3 bmp from lab3 Image activity
 *
 *  Created by Bryan Moh & Ajay Thiagarajah on 02/04/12.
 *  Containing code created by Richard Buckland on 28/01/11.
 *  Copyright 2012 Licensed under Creative Commons SA-BY-NC 3.0. 
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <unistd.h>
#include <math.h>
#include "mandelbrot.h"
#include "pixelColor.h"

#define BYTES_PER_PIXEL 3
#define BITS_PER_PIXEL (BYTES_PER_PIXEL*8)
#define NUMBER_PLANES 1
#define PIX_PER_METRE 2835
#define MAGIC_NUMBER 0x4d42
#define NO_COMPRESSION 0
#define OFFSET 54
#define DIB_HEADER_SIZE 40
#define NUM_COLORS 0

#define ZOOM_POWER 0.5
#define ZOOM_STRENGTH 2
#define MAX_SATURATION 255


#define TRUE 1
#define FALSE 0

#define NORM_PIX_SIZE 0.0078125
#define ESCAPE_VAL 255

#define POINT_OF_NO_RETURN 2
 
#define SIZE 512

void createbmp (int socket, double x, double y, int zoom);
int escapeSteps(double Re, double Im);
double displacement(double Real, double Img);
int waitForConnection (int serverSocket);
int makeServerSocket (int portno);
void serveBMP (int socket, double x, double y, int zoom);
static void serveHTML (int socket);
static void testEscapeSteps(void) ;

typedef unsigned char  bits8;
typedef unsigned short bits16;
typedef unsigned int   bits32;

#define SIMPLE_SERVER_VERSION 1.0
#define REQUEST_BUFFER_SIZE 1000
#define DEFAULT_PORT 1917
#define NUMBER_OF_PAGES_TO_SERVE 100
// after serving this many pages the server will halt

int main (int argc, char *argv[]) {

   testEscapeSteps();
      
   printf ("************************************\n");
   printf ("Starting simple server %f\n", SIMPLE_SERVER_VERSION);
   printf ("Serving bmps since 2012\n");   
   
   int serverSocket = makeServerSocket (DEFAULT_PORT);   
   printf ("Access this server at http://localhost:%d/\n", DEFAULT_PORT);
   printf ("************************************\n");
   
   char request[REQUEST_BUFFER_SIZE];
   
   int numberServed = 0;
   while (numberServed < NUMBER_OF_PAGES_TO_SERVE) {
      
      printf ("*** So far served %d pages ***\n", numberServed);
      
      int connectionSocket = waitForConnection (serverSocket);
      // wait for a request to be sent from a web browser, open a new
      // connection for this conversation
      
      // read the first line of the request sent by the browser  
      int bytesRead;
      bytesRead = read (connectionSocket, request, (sizeof request)-1);
      assert (bytesRead >= 0); 
      // were we able to read any data from the connection?
            
      // print entire request to the console 
      printf (" *** Received http request ***\n %s\n", request);
      
      //send the browser a simple html page using http
      printf (" *** Sending http response ***\n");
      //serveBMP(connectionSocket);

      double x = 0;
      double y = 0;
      int zoom = 0;


      int arg = sscanf(request, "GET /tile_x%lf_y%lf_z%d.bmp HTTP/1.1", &x, &y, &zoom);

      if (arg == 0) {
         printf("serve\n");
         serveHTML(connectionSocket);
      } else {
         printf("Entering...\n");
      
         serveBMP(connectionSocket, x, y, zoom);
      }
      // close the connection after sending the page- keep aust beautiful
      
      close(connectionSocket);
      
      numberServed++;
   } 
   
   // close the server connection after we are done- keep aust beautiful
   printf ("** shutting down the server **\n");
   close (serverSocket);
   
   return EXIT_SUCCESS; 
}

void serveBMP (int socket, double x, double y, int zoom) {
   char* message;
   
   // first send the http response header
   
   // (if you write stings one after another like this on separate
   // lines the c compiler kindly joins them togther for you into
   // one long string)
   message = "HTTP/1.0 200 OK\r\n"
                "Content-Type: image/bmp\r\n"
                "\r\n";
   printf ("about to send=> %s\n", message);
   write (socket, message, strlen (message));
   
   // now send the BMP
   unsigned char bmp[54] = {
     0x42,0x4d,
     0x36,0x00,0x0C,0x00,
     0x00,0x00,0x00,0x00,
     0x36,0x00,
     0x00,0x00,0x28,0x00,
     0x00,0x00,
     0x00,0x02,0x00,0x00,
     0x00,0x02,0x00,0x00,
     0x01,0x00,0x18,0x00,0x00,0x00,
     0x00,0x00,0x24,0x00,0x00,0x00,0x13,0x0b,
     0x00,0x00,0x13,0x0b,0x00,0x00,0x00,0x00,
     0x00,0x00,0x00,0x00,0x00,0x00};


   write (socket, bmp, sizeof(bmp));
   
   createbmp(socket,x, y, zoom);
   
}


// start the server listening on the specified port number
int makeServerSocket (int portNumber) { 
   
   // create socket
   int serverSocket = socket (AF_INET, SOCK_STREAM, 0);
   assert (serverSocket >= 0);   
   // error opening socket
   
   // bind socket to listening port
   struct sockaddr_in serverAddress;
   bzero ((char *) &serverAddress, sizeof (serverAddress));
   
   serverAddress.sin_family      = AF_INET;
   serverAddress.sin_addr.s_addr = INADDR_ANY;
   serverAddress.sin_port        = htons (portNumber);
   
   // let the server start immediately after a previous shutdown
   int optionValue = 1;
   setsockopt (
      serverSocket,
      SOL_SOCKET,
      SO_REUSEADDR,
      &optionValue, 
      sizeof(int)
   );

   int bindSuccess = 
      bind (
         serverSocket, 
         (struct sockaddr *) &serverAddress,
         sizeof (serverAddress)
      );
   
   assert (bindSuccess >= 0);
   // if this assert fails wait a short while to let the operating 
   // system clear the port before trying again
   
   return serverSocket;
}

// wait for a browser to request a connection,
// returns the socket on which the conversation will take place
int waitForConnection (int serverSocket) {
   // listen for a connection
   const int serverMaxBacklog = 10;
   listen (serverSocket, serverMaxBacklog);
   
   // accept the connection
   struct sockaddr_in clientAddress;
   socklen_t clientLen = sizeof (clientAddress);
   int connectionSocket = 
      accept (
         serverSocket, 
         (struct sockaddr *) &clientAddress, 
         &clientLen
      );
   
   assert (connectionSocket >= 0);
   // error on accept
   
   return (connectionSocket);
}
static void serveHTML (int socket) {
   char* message;
 
   // first send the http response header
   message =
      "HTTP/1.0 200 Found\n"
      "Content-Type: text/html\n"
      "\n";
   printf ("about to send=> %s\n", message);
   write (socket, message, strlen (message));
 
   message =
      "<!DOCTYPE html>\n"
      "<script src=\"http://almondbread.cse.unsw.edu.au/tiles.js\"></script>"
      "\n";      
   write (socket, message, strlen (message));
   }


typedef struct _color{

   int red;
   int green;
   int blue;

}color;

color colorDecide(int steps);

void createbmp (int socket, double x, double y, int zoom) {
// check that the types have the size i'm relying on here
   assert (sizeof(bits8)  == 1);
   assert (sizeof(bits16) == 2);
   assert (sizeof(bits32) == 4);

   //Run tests on escapeSteps function
   //testEscapeSteps();
 
   //Calculate number of bytes we need to send over
   int numBytes = (SIZE * SIZE * BYTES_PER_PIXEL);

   //Next 3 variables hold user inputs
  
   
   //Counts how many bytes have been sent to BMP file
   int byteCount = 0;

   //Finds starting point for bmp to start printing.
   /* -2*pow(0.5,zoom) ensures co-ords of first pixel printed is found at the 
      bottom left corner of tile*/
   /* (NORM_PIX_SIZE*pow(0.5,zoom) makes sure we test the center of each pixel 
     to see if it is black or white (see lecture on task 2B)*/

   double zoomConst = (SIZE/ZOOM_STRENGTH)*pow(ZOOM_POWER,zoom);

   double Re = x - zoomConst;
   double Im = y - zoomConst;

   //Copies starting coords into varibles we can mess around with and then change back into the originals if we need.
   double real = Re;
   double imaginary = Im;

   int pixCount = 0;
   //Keep looping until we run out of pixels to print into.
   printf("\n----------------Starting (%lf, %lf)...\n", Re, Im);
   while (byteCount < numBytes){
   
      bits8 byte; 

      color pixel;
   
      pixel = colorDecide(escapeSteps(real, imaginary));

   
      byte = pixel.blue;

      write (socket, &byte, sizeof(byte));  

      byte = pixel.green;

      write (socket, &byte, sizeof(byte));

      byte = pixel.red;

      write (socket, &byte, sizeof(byte));

      //loads coords of next value to be tested in a line of pixels
      real += pow(ZOOM_POWER,zoom);
      pixCount++;

      if((byteCount) % SIZE == 0){

         //If we've started to print a new line of pixels, this alters the coordinates we are working with to it.
         real = Re;

         imaginary += pow(ZOOM_POWER,zoom);

      }

      byteCount += BYTES_PER_PIXEL;

   }
   printf("Printed out %d pixels, should be: %d\n", pixCount, 512*512);
 }
 
int escapeSteps(double Re, double Im){


   double RPart = Re;
   double IPart = Im;

   double ReTemp = 0;
   double ImTemp = 0;

   int count = 0;

   int escapeLoop = FALSE;

   /*Means:Keep on looping unless we've looped more than limit
     (255) and we don't want to stop looping. */
   while (count <= ESCAPE_VAL && escapeLoop == FALSE){

      //Check displacement of point from (0,0) on Argand diag.
      double displacementValue = displacement(ReTemp, ImTemp);

      //if displacement of point > 2, stop looping.
      if (displacementValue > POINT_OF_NO_RETURN){

         escapeLoop = TRUE;

      }else{

         //If we haven't stopped looping, load next values.
         RPart = ReTemp;
         IPart = ImTemp;

         ReTemp = (RPart*RPart)-(IPart*IPart)+Re;
         ImTemp = (2*RPart*IPart) + Im;

         count++;

      }

   }

   //Return steps taken to escape loop.
   return count;

}

double displacement(double Real, double Img){

   //Pythag. theorem used to find displacement
   double distance = sqrt(Real*Real+Img*Img);

   return distance;
   
}

//Unit tests.
static void testEscapeSteps(void) {
   printf (" Testing escapeTests ...\n");
   printf (
     "  (using a few sample unit tests only - the automarker "
     "will use more tests)\n"
   );
 
   assert (escapeSteps (100.0, 100.0) == 1);
   assert (escapeSteps (0.0, 0.0)     == 256);
 
   assert (escapeSteps (-1.5000000000000, -1.5000000000000) == 1);
   assert (escapeSteps (-1.4250000000000, -1.4250000000000) == 1);
   assert (escapeSteps (-1.3500000000000, -1.3500000000000) == 2);
   assert (escapeSteps (-1.2750000000000, -1.2750000000000) == 2);
   assert (escapeSteps (-1.2000000000000, -1.2000000000000) == 2);
   assert (escapeSteps (-1.1250000000000, -1.1250000000000) == 3);
   assert (escapeSteps (-1.0500000000000, -1.0500000000000) == 3);
   assert (escapeSteps (-0.9750000000000, -0.9750000000000) == 3);
   assert (escapeSteps (-0.9000000000000, -0.9000000000000) == 3);
   assert (escapeSteps (-0.8250000000000, -0.8250000000000) == 4);
   assert (escapeSteps (-0.7500000000000, -0.7500000000000) == 4);
   assert (escapeSteps (-0.6750000000000, -0.6750000000000) == 6);
   assert (escapeSteps (-0.6000000000000, -0.6000000000000) == 12);
   assert (escapeSteps (-0.5250000000000, -0.5250000000000) == 157);
   assert (escapeSteps (-0.4500000000000, -0.4500000000000) == 256);
   assert (escapeSteps (-0.3750000000000, -0.3750000000000) == 256);
   assert (escapeSteps (-0.3000000000000, -0.3000000000000) == 256);
   assert (escapeSteps (-0.2250000000000, -0.2250000000000) == 256);
   assert (escapeSteps (-0.1500000000000, -0.1500000000000) == 256);
   assert (escapeSteps (-0.0750000000000, -0.0750000000000) == 256);
   assert (escapeSteps (-0.0000000000000, -0.0000000000000) == 256);
 
   assert (escapeSteps (-0.5400000000000, 0.5600000000000) == 256);
   assert (escapeSteps (-0.5475000000000, 0.5650000000000) == 58);
   assert (escapeSteps (-0.5550000000000, 0.5700000000000) == 28);
   assert (escapeSteps (-0.5625000000000, 0.5750000000000) == 22);
   assert (escapeSteps (-0.5700000000000, 0.5800000000000) == 20);
   assert (escapeSteps (-0.5775000000000, 0.5850000000000) == 15);
   assert (escapeSteps (-0.5850000000000, 0.5900000000000) == 13);
   assert (escapeSteps (-0.5925000000000, 0.5950000000000) == 12);
   assert (escapeSteps (-0.6000000000000, 0.6000000000000) == 12);
 
   assert (escapeSteps (0.2283000000000, -0.5566000000000) == 20);
   assert (escapeSteps (0.2272500000000, -0.5545000000000) == 19);
   assert (escapeSteps (0.2262000000000, -0.5524000000000) == 19);
   assert (escapeSteps (0.2251500000000, -0.5503000000000) == 20);
   assert (escapeSteps (0.2241000000000, -0.5482000000000) == 20);
   assert (escapeSteps (0.2230500000000, -0.5461000000000) == 21);
   assert (escapeSteps (0.2220000000000, -0.5440000000000) == 22);
   assert (escapeSteps (0.2209500000000, -0.5419000000000) == 23);
   assert (escapeSteps (0.2199000000000, -0.5398000000000) == 26);
   assert (escapeSteps (0.2188500000000, -0.5377000000000) == 256);
   assert (escapeSteps (0.2178000000000, -0.5356000000000) == 91);
   assert (escapeSteps (0.2167500000000, -0.5335000000000) == 256);
 
   assert (escapeSteps (-0.5441250000000, 0.5627500000000) == 119);
   assert (escapeSteps (-0.5445000000000, 0.5630000000000) == 88);
   assert (escapeSteps (-0.5448750000000, 0.5632500000000) == 83);
   assert (escapeSteps (-0.5452500000000, 0.5635000000000) == 86);
   assert (escapeSteps (-0.5456250000000, 0.5637500000000) == 74);
   assert (escapeSteps (-0.5460000000000, 0.5640000000000) == 73);
   assert (escapeSteps (-0.5463750000000, 0.5642500000000) == 125);
   assert (escapeSteps (-0.5467500000000, 0.5645000000000) == 75);
   assert (escapeSteps (-0.5471250000000, 0.5647500000000) == 60);
   assert (escapeSteps (-0.5475000000000, 0.5650000000000) == 58);
 
   assert (escapeSteps (0.2525812510000, 0.0000004051626) == 60);
   assert (escapeSteps (0.2524546884500, 0.0000004049095) == 61);
   assert (escapeSteps (0.2523281259000, 0.0000004046564) == 63);
   assert (escapeSteps (0.2522015633500, 0.0000004044033) == 65);
   assert (escapeSteps (0.2520750008000, 0.0000004041502) == 67);
   assert (escapeSteps (0.2519484382500, 0.0000004038971) == 69);
   assert (escapeSteps (0.2518218757000, 0.0000004036441) == 72);
   assert (escapeSteps (0.2516953131500, 0.0000004033910) == 74);
   assert (escapeSteps (0.2515687506000, 0.0000004031379) == 77);
   assert (escapeSteps (0.2514421880500, 0.0000004028848) == 81);
   assert (escapeSteps (0.2513156255000, 0.0000004026317) == 85);
   assert (escapeSteps (0.2511890629500, 0.0000004023786) == 89);
   assert (escapeSteps (0.2510625004000, 0.0000004021255) == 94);
   assert (escapeSteps (0.2509359378500, 0.0000004018724) == 101);
   assert (escapeSteps (0.2508093753000, 0.0000004016193) == 108);
   assert (escapeSteps (0.2506828127500, 0.0000004013662) == 118);
   assert (escapeSteps (0.2505562502000, 0.0000004011132) == 131);
   assert (escapeSteps (0.2504296876500, 0.0000004008601) == 150);
   assert (escapeSteps (0.2503031251000, 0.0000004006070) == 179);
   assert (escapeSteps (0.2501765625500, 0.0000004003539) == 235);
   assert (escapeSteps (0.2500500000000, 0.0000004001008) == 256);
 
   assert (escapeSteps (0.3565670191423, 0.1094322101123) == 254);
   assert (escapeSteps (0.3565670191416, 0.1094322101120) == 255);
   assert (escapeSteps (0.3565670191409, 0.1094322101118) == 256);
   assert (escapeSteps (0.3565670950000, 0.1094322330000) == 222);
   assert (escapeSteps (0.3565670912300, 0.1094322318625) == 222);
   assert (escapeSteps (0.3565670874600, 0.1094322307250) == 222);
   assert (escapeSteps (0.3565670836900, 0.1094322295875) == 222);
   assert (escapeSteps (0.3565670799200, 0.1094322284500) == 222);
   assert (escapeSteps (0.3565670761500, 0.1094322273125) == 222);
   assert (escapeSteps (0.3565670723800, 0.1094322261750) == 222);
   assert (escapeSteps (0.3565670686100, 0.1094322250375) == 223);
   assert (escapeSteps (0.3565670648400, 0.1094322239000) == 223);
   assert (escapeSteps (0.3565670610700, 0.1094322227625) == 224);
   assert (escapeSteps (0.3565670573000, 0.1094322216250) == 225);
   assert (escapeSteps (0.3565670535300, 0.1094322204875) == 256);
   assert (escapeSteps (0.3565670497600, 0.1094322193500) == 256);
   assert (escapeSteps (0.3565670459900, 0.1094322182125) == 237);
   assert (escapeSteps (0.3565670422200, 0.1094322170750) == 233);
   assert (escapeSteps (0.3565670384500, 0.1094322159375) == 232);
   assert (escapeSteps (0.3565670346800, 0.1094322148000) == 232);
   assert (escapeSteps (0.3565670309100, 0.1094322136625) == 232);
   assert (escapeSteps (0.3565670271400, 0.1094322125250) == 233);
   assert (escapeSteps (0.3565670233700, 0.1094322113875) == 234);
   assert (escapeSteps (0.3565670196000, 0.1094322102500) == 243);
 
 
   printf (" ... escapeSteps tests passed!\n");
}
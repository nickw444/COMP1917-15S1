//By:          Nick Whyte & Charlie
//Course:      COMP1917
//Date:        9 April
//Tutorial:    Wednesday Flute 3pm-6pm.
//Tutor:       Jackie
//Description: Pixel Color :)


#include "stdlib.h"
#include "assert.h"
#include "math.h"
#include "stdio.h"
#include "pixelColor.h"
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include "mandelbrot.h"

typedef unsigned char  bits8;
typedef unsigned short bits16;
typedef unsigned int   bits32;

 typedef struct _color {
    bits8 red;
    bits8 green;
    bits8 blue;
} color;


#define TRUE 1
#define FALSE 0

// BMP Things
#define BYTES_PER_PIXEL 3
#define BITS_PER_PIXEL (BYTES_PER_PIXEL*8)
#define NUMBER_PLANES 1
#define PIX_PER_METRE 2835
#define MAGIC_NUMBER 0x4d42
#define NO_COMPRESSION 0
#define OFFSET 54
#define DIB_HEADER_SIZE 40
#define NUM_COLORS 0
#define SIZE 512

#define SIMPLE_SERVER_VERSION 2.0
#define REQUEST_BUFFER_SIZE 1000
#define DEFAULT_PORT 7191

#define BMP_FILE_NAME "brot.bmp"
#define TRUE 1
#define FALSE 0


int waitForConnection (int serverSocket);
int makeServerSocket (int portno);
void serveHTML (int socket);
color getPixelColor(int steps);

double power (double base, long exponent);
void testMath(void);
void writeBMPToBrowser(int connectionSocket, double x, double y, int zoom);
void writeHeaderToConnection(int connection); 


int main (int argc, char* argv[]) {
 
    printf ("************************************\n");
    printf ("Starting simple server %f\n", SIMPLE_SERVER_VERSION);
    printf ("Serving poetry since 2011\n");
    printf ("Access this server at http://localhost:%d/\n", DEFAULT_PORT);
    printf ("************************************\n");
 
    int serverSocket = makeServerSocket(DEFAULT_PORT);
    char request[REQUEST_BUFFER_SIZE];
    while (TRUE) {
        int connectionSocket = waitForConnection(serverSocket);
        int bytesRead = recv (connectionSocket, request, sizeof(request) - 1, 0);
        assert (bytesRead >= 0);

        //Reset the coordinates for next pass in case malformed coordinates are passed.
        double xCoordinate = 0;
        double yCoordinate = 0;
        int zCoordinate  = 0;

        char forwardSlash;
        char afterForwardSlash;
        sscanf(request, "GET %c%c HTTP", &forwardSlash, &afterForwardSlash);
        printf("Char after Foward slash: '%c'\n", afterForwardSlash);
        if (afterForwardSlash == 't') {
            //We were probably passed a tile, let's give them a tile.
            char extension[5];
            sscanf(request, "GET /tile_x%lf_y%lf_z%d.%s ", &xCoordinate, &yCoordinate, &zCoordinate, extension);
            if (extension[0] == 'b' && extension[1] == 'm' && extension[2] == 'p') {
                writeBMPToBrowser(connectionSocket, xCoordinate, yCoordinate, zCoordinate);
            }
            else {
                char * message = "Oops, malformed request";
                send(connectionSocket, message, strlen(message), 0);
            }
            printf("x: %lf y: %lf z:%d Extension: %s\n", xCoordinate, yCoordinate, zCoordinate, extension);
            
        }
        else if (afterForwardSlash == ' ') {
            char * message = "<!DOCTYPE html><script src=\"http://almondbread.cse.unsw.edu.au/tiles.js\"></script>";
            send(connectionSocket, message, strlen(message), 0);
        }
        else {
            char * message = "Oops, malformed request";
            send(connectionSocket, message, strlen(message), 0);
        }
        // STEP 4. close the connection after sending the page- keep aust beautiful
        close (connectionSocket);
    }
    printf("Closing server\n");
    close (serverSocket);
  
    return EXIT_SUCCESS;
}



void writeBMPToBrowser(int connectionSocket, double x, double y, int zoom) {
   writeHeaderToConnection(connectionSocket);
   float zoomLevel = zoom;
   float xcentre = x;
   float ycentre = y;

   float pixelWidth = pow(2, zoomLevel *-1);

   int numBytes = (SIZE * SIZE * BYTES_PER_PIXEL);
   int pos = 0;

   while (pos < numBytes) {
      //loop through each pixel from bottom left to top right.
      int row = pos/SIZE;
      int relativeRow = row - SIZE/2;
      int rowPixel = pos - row*SIZE;
      int relativeRowPixel = rowPixel - SIZE/2;

      float leftOffset = relativeRowPixel * pixelWidth + xcentre;
      float bottomOffset = relativeRow * pixelWidth + ycentre;

      int steps = escapeSteps(leftOffset, bottomOffset);

      color pixel = getPixelColor(steps);
      bits8 pixelToWrite[3] = {pixel.blue, pixel.green, pixel.red};

      send(connectionSocket, &pixelToWrite, sizeof(pixelToWrite), 0);
      pos++;
   }
}



int escapeSteps (double x, double y) {
   int i = 0;
   double magnitude = 0;
   double newR = 0;
   double newI = 0;

   while((i < 256) && (magnitude <= 4)) {
      double oldR = newR;
      double oldI = newI;
      // newR = oldR * oldR - oldI*oldI + x;

      // Square the complex number
      newR = oldR*oldR - oldI*oldI + x;
      newI = 2 * oldR  * oldI + y;


      // printf("NewR:%f \n New S: %f\n", newR, newI);
      
      magnitude = newR * newR + newI * newI;
      i++;
   }
   return i;
}



color getPixelColor(int steps) {

   color returnColor = {0,0,0};
   returnColor.red = stepsToRed(steps);
   returnColor.green = stepsToGreen(steps);
   returnColor.blue = stepsToBlue(steps);

   return returnColor;
}

void writeHeaderToConnection(int connection) {
   // * Original code by Richard Buckland 28/01/11, 30/3/14.
   // * Modified by Nick Whyte & Charlie Lu to allow writing to a 
   // * connection instead of a file. 16 April 2014.
   // * Licensed under Creative Commons SA-BY-NC 3.0, share freely.

   assert(sizeof (bits8) == 1);
   assert(sizeof (bits16) == 2);
   assert(sizeof (bits32) == 4);
   
   bits16 magicNumber = MAGIC_NUMBER;
   send (connection, &magicNumber, sizeof magicNumber, 0);

   bits32 fileSize = OFFSET + (SIZE * SIZE * BYTES_PER_PIXEL);
   send (connection, &fileSize, sizeof fileSize, 0);


   bits32 reserved = 0;
   send (connection, &reserved, sizeof reserved, 0);
 
   bits32 offset = OFFSET;
   send (connection, &offset, sizeof offset, 0);
 
   bits32 dibHeaderSize = DIB_HEADER_SIZE;
   send (connection, &dibHeaderSize, sizeof dibHeaderSize, 0);

   bits32 width = SIZE;
   send (connection, &width, sizeof width, 0);
 
   bits32 height = SIZE;
   send (connection, &height, sizeof height, 0);
 
   bits16 planes = NUMBER_PLANES;
   send (connection, &planes, sizeof planes, 0);
 
   bits16 bitsPerPixel = BITS_PER_PIXEL;
   send (connection, &bitsPerPixel, sizeof bitsPerPixel, 0);
 
   bits32 compression = NO_COMPRESSION;
   send (connection, &compression, sizeof compression, 0);
 
   bits32 imageSize = (SIZE * SIZE * BYTES_PER_PIXEL);
   send (connection, &imageSize, sizeof imageSize, 0);
 
   bits32 hResolution = PIX_PER_METRE;
   send (connection, &hResolution, sizeof hResolution, 0);
 
   bits32 vResolution = PIX_PER_METRE;
   send (connection, &vResolution, sizeof vResolution, 0);
 
   bits32 numColors = NUM_COLORS;
   send (connection, &numColors, sizeof numColors, 0);
 
   bits32 importantColors = NUM_COLORS;
   send (connection, &importantColors, sizeof importantColors, 0);
}

// start the server listening on the specified port number
int makeServerSocket (int portNumber) {
   // * Original code by Richard Buckland 28/01/11, 30/3/14.
   // * Licensed under Creative Commons SA-BY-NC 3.0, share freely.

    // create socket
   int serverSocket = socket (AF_INET, SOCK_STREAM, 0);
   assert (serverSocket >= 0);
   // check there was no error in opening the socket

   // bind the socket to the listening port  (7191 in this case)
   struct sockaddr_in serverAddress;
   serverAddress.sin_family      = AF_INET;
   serverAddress.sin_addr.s_addr = INADDR_ANY;
   serverAddress.sin_port        = htons (portNumber);

   // tell the server to restart immediately after a previous shutdown
   // even if it looks like the socket is still in use
   // otherwise we might have to wait a little while before rerunning the
   // server once it has stopped
   const int optionValue = 1;
   setsockopt (serverSocket, SOL_SOCKET, SO_REUSEADDR, &optionValue, sizeof (int));

   int bindSuccess = bind (serverSocket, (struct sockaddr*)&serverAddress, sizeof (serverAddress));

   assert (bindSuccess >= 0);
   // if this assert fails wait a short while to let the operating
   // system clear the port before trying again

   return serverSocket;
}
 
 
// wait for a browser to request a connection,
// returns the socket on which the conversation will take place
int waitForConnection (int serverSocket) {
   // * Original code by Richard Buckland 28/01/11, 30/3/14.
   // * Licensed under Creative Commons SA-BY-NC 3.0, share freely.

   // listen for a connection
   const int serverMaxBacklog = 10;
   listen (serverSocket, serverMaxBacklog);

   // accept the connection
   struct sockaddr_in clientAddress;
   socklen_t clientLen = sizeof (clientAddress);
   int connectionSocket = accept (serverSocket, (struct sockaddr*)&clientAddress, &clientLen);
   assert (connectionSocket >= 0);
   // check for connection error

   return connectionSocket;
}
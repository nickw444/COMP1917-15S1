#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "pixelColor.h"

#define MIN_LOW 0
#define MAX_LOW 85

#define MAX_MID 170

#define MAX_HIGH 254

#define MAX_INTENSITY 255

#define INCREMENT 3

#define COLOR_RANGE 5

#define RANGE_ADJUSTER 1

#define CONTRAST 50


typedef struct _color{

   int red;
   int green;
   int blue;

}color;

color colorDecide(int steps){

   color returnPix;

   returnPix.red = stepsToRed(steps);  
   returnPix.green = stepsToGreen(steps);
   returnPix.blue = stepsToBlue(steps); 


   return returnPix;
}

unsigned char stepsToRed(int steps) {

   int returnVal;

   if(steps >= MIN_LOW && steps <= MAX_LOW){
      returnVal = MIN_LOW;
   }else if (steps > MAX_LOW && steps <= MAX_MID){
      returnVal = MIN_LOW;
   }else if (steps > MAX_MID && steps <= MAX_HIGH){
      returnVal = (steps-MAX_MID)*INCREMENT;
   }else if (steps >= MAX_INTENSITY){

      returnVal = (rand()%COLOR_RANGE+RANGE_ADJUSTER)*CONTRAST;

   }

 return returnVal; 
}
 
unsigned char stepsToGreen(int steps) {

   int returnVal;  

   if(steps >= MIN_LOW && steps <= MAX_LOW){
      returnVal= MIN_LOW;
   }else if (steps > MAX_LOW && steps <= MAX_MID){
      returnVal = (steps-MAX_LOW)*INCREMENT;
   }else if (steps > MAX_MID && steps <= MAX_HIGH){
      returnVal = MAX_INTENSITY;
   }else if (steps >= MAX_INTENSITY){

      returnVal = (rand()%COLOR_RANGE+RANGE_ADJUSTER)*CONTRAST;

   }

 return returnVal; 
}
 
unsigned char stepsToBlue(int steps) {

   int returnVal;

   if(steps >= MIN_LOW && steps <= MAX_LOW){

      returnVal = steps*INCREMENT; 

   }else if (steps > MAX_LOW && steps <= MAX_MID){

      returnVal = MAX_INTENSITY;

   }else if (steps > MAX_MID && steps <= MAX_HIGH){

      returnVal = MAX_INTENSITY;
   
   }else if (steps >= MAX_INTENSITY){

      returnVal = (rand()%COLOR_RANGE+RANGE_ADJUSTER)*CONTRAST;

   }


 return returnVal; 
}
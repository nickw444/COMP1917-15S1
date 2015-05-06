// Leon Nguyen, Chris Miles, Weiping Liu
// 21 April 2015
// Program that inspects memory location of main and variables
// in its frame as well as memory around an array 

#include <stdlib.h>
#include <stdio.h>

#define SCAN_RANGE 500
#define ARRAY_SIZE 10 //size of testArray

void printValuesAround (int *array);

int main (int argc, char* argv[]) {

   int canaryA = 42;
   int canaryB = 99;
   int testArray[10] = {0,1,2,3,4,5,6,7,8,9};
   int index;

   printValuesAround (testArray);
   
   printf ("main is at address %p\n", &main);

   //prints address of testArray elements
   index = 0;
   while (index < ARRAY_SIZE) { 
      printf ("testArray[%d] is at address %p\n", index, &testArray[index]);
      index++;
   }

   //prints address of canaryA, canaryB
   index = -SCAN_RANGE;
   while (index < ARRAY_SIZE + SCAN_RANGE) { 
      if (testArray[index] == canaryA) {
         printf ("canaryA is at address %p\n", &testArray[index]);
      } else if (testArray[index] == canaryB) {
         printf ("canaryB is at address %p\n", &testArray[index]);
      }
      index++;
   }

   return EXIT_SUCCESS;
}

//Prints values of memory in and around an array
void printValuesAround (int *array) {
   int index = -SCAN_RANGE;
   while (index < ARRAY_SIZE + SCAN_RANGE) {
      printf ("testArray[%d]=%d\n", index, array[index]);
      index++;
   }
   printf ("\n");  
}
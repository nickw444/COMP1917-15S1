//Nick Whyte
//25 Mar 2014
//This program contains a function to swap two integers. 

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


void swap (int* first, int* second);
void testSwap(void);
void fancySwap (int* first, int* second);
void testFancySwap(void);

int main(int argc, char * argv[]) {
   testSwap();
   testFancySwap();
   return EXIT_SUCCESS;
}

void swap (int* first, int* second) {
   int swap = *first;
   *first = *second;
   *second = swap;
}

void fancySwap (int* first, int* second) {
   *first = *first ^ *second;
   *second = *first ^ *second;
   *first = *first ^ *second;
}

void testFancySwap(void) {
   int i1 = 123;
   int i2 = 321;
   fancySwap(&i1, &i2);
   assert(i1 == 321 && i2 == 123);

   int i3 = 543;
   int i4 = 555;
   fancySwap(&i3, &i4);
   assert(i3 == 555 && i4 == 543);

}

void testSwap(void) {
   int i1 = 123;
   int i2 = 321;
   swap(&i1, &i2);
   assert(i1 == 321 && i2 == 123);

   int i3 = 543;
   int i4 = 555;
   swap(&i3, &i4);
   assert(i3 == 555 && i4 == 543);

}

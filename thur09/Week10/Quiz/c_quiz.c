#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{

    int myVariable = 33;
    int * myVariablePointer = &myVariable;    
    // doSomething(&myVariablePointer);


    printf("%p\n", *&myVariablePointer); // Line 1
    printf("%p\n", myVariablePointer);   // Line 2 


    printf("%d\n", myVariablePointer);
    printf("%d\n", *myVariablePointer);


    printf("%d\n", **&myVariablePointer);
    printf("%d\n", *myVariablePointer);


    return EXIT_SUCCESS;
}

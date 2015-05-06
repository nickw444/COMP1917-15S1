#include <stdio.h>
#include <stdlib.h>
 
#define ARRAY_SIZE 11
 
int main (int argc, char *argv[]) {
    
    int my_array[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9,10};

    int correct_number = 10;
    printf("Enter a number between 0 and 10\n");
    int input, input2;
    scanf("%d", &input);


    printf("Enter a number between 0 and 10\n");
    scanf("%d", &input2);

    int lookup = my_array[input2];
    printf("%d\n", lookup);

    if (input == correct_number) {
    	printf("You are awesome!\n");
    }


    // int lookup = my_array[input];
    // printf("Lookup was: %d\n", lookup);
    // int i = 0;
    // while (i < 9834739) {
    // 	printf("%c\n", my_array[i]);
    // 	i ++;
    // }

    /*

    
    char c = getchar();
    // Let's get the element at the index the user entered...
    
    
*/
    return EXIT_SUCCESS;
}
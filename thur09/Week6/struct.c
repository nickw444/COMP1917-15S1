#include "stdlib.h"
#include "assert.h"
#include "stdio.h"
#include "includes.h"


int main(int argc, char const *argv[])
{
	color my_struct1 = {'a','b','c'};
	
	printf("%c\n", my_struct1.red);
	printf("%c\n", my_struct1.green);
	printf("%c\n", my_struct1.blue);


	color * my_struct_pointer = &my_struct1;

	color my_struct_dereference = *my_struct_pointer;
	printf("%c\n", my_struct_dereference.red);
	
	printf("%c\n", my_struct_pointer->red);




	return 0;
}
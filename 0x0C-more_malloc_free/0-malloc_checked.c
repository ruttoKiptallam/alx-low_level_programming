#include <stdio.h>
#include <stdlib.h>
/**
 *  allocate the requested memory and returns a pointer to it
 *@b:number bytes to be allocated
 *if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
 **/

void *malloc_checked(unsigned int b)
{
	int *str;
	malloc_checked(sizeof(char) * 1024);
          printf("%d\n", b);
        	           
		exit(98);

	return (b);
}	

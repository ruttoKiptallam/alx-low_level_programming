#include <stdio.h>
#include <stdlib.h>
/**
 *  allocate the requested memory and returns a pointer to it
 *@b:number bytes to be allocated
 **/

void *malloc_checked(unsigned int b)
{
	void *str = malloc(b);

	if (str == NULL)
	           exit(98);

	free (str);
}	

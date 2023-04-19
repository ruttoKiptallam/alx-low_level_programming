#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/*
 *
 *@size:  is the size of the array
 *@action: is a pointer to the function you need to use
 *
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{	if(array == NULL || action == NULL)
	return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}

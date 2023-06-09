/*
 * Description: This file defines the function int_index, which searches for an
 *        integer in an array of integers using
 *              a comparison function passed as an argument.
 */

#include "function_pointers.h"
#include <stdio.h>

/*
 *int_index - Searches for an integer in an array of integers.
 *@size:is the number of elements in the array array
 *@cmp:is a pointer to the function to be used to compare values
 *If no element matches, return -1
 *If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
		return (index);
	return (-1);
}

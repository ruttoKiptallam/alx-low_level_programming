#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
 *where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
 *old_size is the size, in bytes, of the allocated space for ptr and new_size is the new size, in bytes of the new memory block
 *The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
 *If new_size > old_size, the “added” memory should not be initialized
 *If new_size == old_size do not do anything and return ptr
 *If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
 *If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (ptr == NULL)
		return (p);

	free(ptr);
	return (p);
}	

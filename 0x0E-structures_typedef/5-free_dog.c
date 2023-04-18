#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/*
 *
 *
 *
 *freeing dogs
 *
 */

void free_dog(dog_t *d)
{
	if((d) == NULL)
	{
	free(d-> name);
	free (d-> owner);
	free (d);
	}
	
}
   

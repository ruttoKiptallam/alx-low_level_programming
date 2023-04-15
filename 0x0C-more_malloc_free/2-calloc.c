#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* If nmemb or size is 0, then _calloc returns null
* If malloc fails, then _calloc returns null
* Return: Pointer.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(d);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (d); i++)
	{
		p[i] = 0;
	}
	return (p);
}	

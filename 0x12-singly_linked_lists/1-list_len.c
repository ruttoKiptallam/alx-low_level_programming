#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*Prototype: size_t print_list(const list_t *h);
*@r: number of nodes
*h: string
*
*
*Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t r = 0;
	while (h != NULL)
	{
		r++;
        h = h->next;
	}
	return (r);
}

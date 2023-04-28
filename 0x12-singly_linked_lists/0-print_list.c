#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*print_list: print list of strings 
*Prototype: size_t print_list(const list_t *h);
*size_t: space allocated to data
*@h: string
*If string is NULL, print [0] (nil)
*@r: number of nodes
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t r = 0;

	if (h != NULL)
	{
		printf("[0] (nil\n)");
	}
	else
	{
		printf("[%d] %s", h->len, h->str);
	}
	r++;
	h = h->next;
	return (r);
}
int main()
{
	const list_t *h;

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
	}
	return (0);
}

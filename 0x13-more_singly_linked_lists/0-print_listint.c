#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/*
 *size_t print_listint(const listint_t *h);
 *Return: the number of nodes
 *return node
 *@v: node
 */
size_t print_listint(const listint_t *h)
{
	size_t v = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		v++;
	}
	return v;
}

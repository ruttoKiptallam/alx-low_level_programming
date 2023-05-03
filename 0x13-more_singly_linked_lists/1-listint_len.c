#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 *
 * @h: A pointer to the head of the list.
 *@v: node
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h != NULL)
	{
		v++;
		h = h->next;
	}
	
	return v;
}

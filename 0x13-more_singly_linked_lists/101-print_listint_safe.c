#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count = 0;
	
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		node = head->next;
		if (node >= head)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
		
		head = node;
	}
	
	return (count);
}

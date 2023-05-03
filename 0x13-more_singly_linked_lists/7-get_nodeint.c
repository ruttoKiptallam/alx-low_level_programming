#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
 *
 *where index is the index of the node, starting at 0
 *if the node does not exist, return NULL
 *
 */ 
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;
	
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	
	if (i == index && current != NULL)
		return current;
	
	return NULL;
}

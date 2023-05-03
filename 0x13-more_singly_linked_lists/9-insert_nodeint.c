#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *idx is the index of the list
 *Returns address of the new node,else NULL if it failed
 *
 *
 */ 
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int i;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	
	new_node->n = n;
	
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return new_node;
	}
	
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}
	
	new_node->next = current->next;
	current->next = new_node;
	
	return new_node;
}

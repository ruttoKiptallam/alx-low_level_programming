#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 *listint_t *add_nodeint_end(listint_t **head, const int n);
 *Return address of the new element,else NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;
	
	new_node = malloc(sizeof(listint_t));
	
	if (new_node == NULL)
		return NULL;
	
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
		return new_node;
	}
	
	current = *head;
	while (current->next != NULL)
		current = current->next;
	
	current->next = new_node;
	
	return new_node;
}

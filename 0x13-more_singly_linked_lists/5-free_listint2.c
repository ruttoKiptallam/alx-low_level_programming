#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *The function sets the head to NULL
 *void free_listint2(listint_t **head);
 *
 *
 *
 */ 
void free_listint2(listint_t **head)
{
	listint_t *current;
	
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	
	*head = NULL;
}

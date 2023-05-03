#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *void free_listint(listint_t *head);
 *
 *free_listint: list
 *
 *
 */ 
void free_listint(listint_t *head)
{
	listint_t *current;
	
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *Prototype: int pop_listint(listint_t **head);
 *if the linked list is empty return 0
 *
 *
 *
 */ 
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;
	
	if (*head == NULL)
		return 0;
	
	temp = *head;
	data = temp->n;
	*head = temp->next;
	
	free(temp);
	
	return data;
}

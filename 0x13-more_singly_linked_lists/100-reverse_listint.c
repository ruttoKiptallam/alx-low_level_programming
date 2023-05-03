#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *Prototype: listint_t *reverse_listint(listint_t **head);
 *
 *
 *
 *Returns: a pointer to the first node of the reversed list
 */ 
listint_t *reverse_listint(listint_t **head)
{
	if (*head == NULL || (*head)->next == NULL)
		return *head;
	
	listint_t *reverse = reverse_listint(&((*head)->next));
	(*head)->next->next = *head;
	(*head)->next = NULL;
	*head = reverse;
	
	return *head;
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *Prototype: int sum_listint(listint_t *head);
 *
 *
 *if the list is empty, return 0
 */ 
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;
	
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	
	return sum;
}

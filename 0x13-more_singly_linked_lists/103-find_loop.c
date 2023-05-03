#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_t *find_listint_loop(listint_t *head);
 *Returns address of the node where the loop starts else NULL if it fails
 *
 *
 *
 *
 *
 */ 
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;
	
	if (head == NULL)
		return NULL;
	
	tortoise = head;
	hare = head;
	
	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			
			return tortoise;
		}
	}
	
	return NULL;
}

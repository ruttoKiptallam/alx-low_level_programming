#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 *int delete_nodeint_at_index(listint_t **head, unsigned int index);
 *index: index of the node that should be deleted
 *Returns: 1 if it succeeded, -1 if it failed
 *Index starts at 0
 *@r: integer representing the index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int r;
	
	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	
	prev = *head;
	
	current = (*head)->next;
	for (r = 1; current != NULL && r < index; r++)
	{
		prev = current;
		current = current->next;
	}
	
	if (current == NULL)
		return (-1);
	
	prev->next = current->next;
	free(current);
	
	return (1);
}
int main()
{
	return (0);
}

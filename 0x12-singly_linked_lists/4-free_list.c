#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *current node: new node
 * free_list - frees a list
 * @head: pointer of the list to be freed
 */
void free_list(list_t *head)
{
	list_t *current_node;
	
	while (current_node->head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
int main(void)
{
	list_t *h = NULL;
	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end: add new node at the end of a list
 * @head: pointer to head of list
 * @str: string to be added as the new node
 *@n: size
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t n;
	list_t *current_node;
	
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}
	
	return new_node;
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

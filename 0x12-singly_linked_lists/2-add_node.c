#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*list_t add_node(list_t **head, const char *str);
*@add_node: add new data
*If string is NULL, print [0] (nil)
*@len: size of data
*@head: new data
*@str: string
*Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length = 0;
	
	while (str[length])
		length++;
	
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		printf("new\n");
	}
	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}

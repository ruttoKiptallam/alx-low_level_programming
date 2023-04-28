#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *@str: string
 *@len: length
 *@next: points to the next node
 *Description: singly linked list node structure
 *@new: a new list
 *
 *
 */
typedef struct list_t
{
    char *str;
    size_t print_list, free_list;
    unsigned int len;
    struct list_t *next;
    struct list_t *new;
    struct list_t *add_node;
    struct list_t *head;
    struct list_t *h;
}list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif


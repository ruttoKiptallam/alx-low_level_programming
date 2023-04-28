#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*Prototype: size_t print_list(const list_t *h);
*@r: number of nodes
*h: string
*If string is NULL, print [0] (nil)
*
*Return: the number of nodes
*/
int main();
size_t list_len(const list_t *h)
{
    size_t r = 0;    

    while (h != NULL)
            h = h->next;
             r++;
            return (r);
}

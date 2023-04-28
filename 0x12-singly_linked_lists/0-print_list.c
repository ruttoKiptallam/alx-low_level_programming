#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
*Prototype: size_t print_list(const list_t *h);
*
*h: string
*If string is NULL, print [0] (nil)
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
    size_t r = 0;
    

    if(h != NULL)
    {
        printf("[0] (nil\n)");
    }
   else
   {
            printf("[%d] %s", h->len, h->str);
   }
            r++;
            h = h->next;

            return (r);
}

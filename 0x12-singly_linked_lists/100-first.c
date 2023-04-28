#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void first(void) __attribute__ ((constructor));

/**
 * print_before_main - prints a output before the main 
 */
void print_before_main(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}

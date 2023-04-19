#include <stdio.h>
#include <stdlib.h>
/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: a funtion pointerthat takes character pointer
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

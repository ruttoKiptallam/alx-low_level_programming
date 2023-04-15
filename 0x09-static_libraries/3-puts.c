#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *str)
{
	int strlen = 0;

	while (str[strlen] != '\0')
	{
		putchar(str[strlen]);
		strlen++;
	}
	putchar('\n');
}

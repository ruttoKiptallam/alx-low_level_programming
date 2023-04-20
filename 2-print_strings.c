#include "variadic_functions.h"
#include <stdarg.h>

/*
 *void print_strings(const char *separator, const unsigned int n, ...);
 *@n:  is the number of strings passed to the function
 *If separator is NULL, don’t print it
 *If one of the string is NULL, print (nil) instead
 *@separator: is the string to be printed between the strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const unsigned int index;
	char str;
	va_list strings;
	va_start(strings, n); 

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *); 

		if (str == NULL)
			printf("(nil\n)"); 
		else
			printf("%s\n", str); 

		if (index != (n - 1) && separator != NULL)
			
			printf("%s\n", separator);
	}

	printf("\n"); 

	va_end(strings); 
}
}

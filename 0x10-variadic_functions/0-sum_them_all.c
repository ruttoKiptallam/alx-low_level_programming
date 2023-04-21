#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/*
 *description of 0-sum_them_all.c: perfom fution of total integers
 *
 *
 *If n == 0, return 0
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;
	
	va_start(nums, n);
	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);
	
	va_end(nums);
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array of integers.
 * @min: input min.
 * @max: input max.
 *
 * Return: array.
 */
int *array_range(int min, int max)
{
	int *b;
	int i, full;

	full = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	b = malloc(sizeof(int) * full);
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		b[i] = min++;
	}
	return (b);
}

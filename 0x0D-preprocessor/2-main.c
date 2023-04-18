#include <stdio.h>

/*
 * main - printing the  name of the file it was compiled from, followed by a new line
 *
 * always return o.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

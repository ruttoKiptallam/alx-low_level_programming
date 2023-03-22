#include "main.h"

/**
 * print_alphabet from a to z
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

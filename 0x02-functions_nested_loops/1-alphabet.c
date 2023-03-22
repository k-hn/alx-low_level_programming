#include "main.h"

/**
 * print_alphabet - Prints out all lowercase alphabets using only `putchar`
 *
 * Param(s): void
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

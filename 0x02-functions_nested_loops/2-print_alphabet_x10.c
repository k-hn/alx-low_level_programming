#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets ten times.
 * Each on a new line
 *
 * Param(s): void
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;
	int ch;

	for (count = 0; count < 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}

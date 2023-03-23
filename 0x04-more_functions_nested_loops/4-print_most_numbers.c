#include "main.h"

/**
 * print_numbers - prints the numbers 0 - 9 except 2 and 4,
 * followed by a newline
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int ch;
	
	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
		{
			continue;
		}
		else
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}

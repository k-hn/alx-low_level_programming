#include "main.h"

/**
 * print_numbers - prints the numbers 0 - 9, followed by a newline
 *
 * Return: void
 */
void print_numbers(void)
{
	int ch;
	
	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

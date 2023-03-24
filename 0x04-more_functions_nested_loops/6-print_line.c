#include "main.h"

/**
 * print_line - prints `_` the specified number of times
 *
 * @n: integer input
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	for (count = 1; count <= n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

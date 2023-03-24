#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: integer input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count;
	int inner_count;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (count = 1; count <= n; count++)
	{
		for (inner_count = 1; inner_count <= count; inner_count++)
		{
			if (inner_count == count)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}

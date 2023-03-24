#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: input integer - size of square to print*
 *
 * Return void
 */
void print_square(int size)
{
	int height;
	int width;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	/* height loop */
	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

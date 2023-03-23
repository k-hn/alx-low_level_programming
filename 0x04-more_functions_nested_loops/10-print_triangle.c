#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int base;
	int height;

	for (height = 1; height <= size; height++)
	{
		for (base = 1; base <= size; base++)
		{
			if (base > (size - height))
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

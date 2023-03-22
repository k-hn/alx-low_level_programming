#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints out `_putchar`, followed by a new line.
 *
 * Return: 0 - always success
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}

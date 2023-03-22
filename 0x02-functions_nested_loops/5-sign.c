#include "main.h"

/**
 * print_sign - prints the sign of a number and
 * returns an appropriate value to that effect
 *
 * @number: input number to be tested
 *
 * Return:
 * 1 if n > 0 (prints `+`)
 * 0 if n == 0 (prints `0`)
 * -1 if n < 0 (prints `-`)
 */
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

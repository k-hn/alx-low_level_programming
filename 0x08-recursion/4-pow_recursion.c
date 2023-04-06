/**
 * _pow_recursion - returns the value of x raised to
 * the power of y
 *
 * @x: input base
 * @y: input power
 *
 * Return: result of exponentiation
 */
#include "main.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

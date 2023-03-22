#include "main.h"

/**
 * _abs - computes the absolute value of a number
 *
 * @number: input number
 *
 * Return:
 * absolute value of number
 */
int _abs(int number)
{
	if (number < 0)
	{
		return (number * -1);
	}
	return (number);
}

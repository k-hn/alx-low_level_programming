#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @number: input number
 *
 * Return:
 * the last digit of input number
 */
int print_last_digit(int number)
{
	int lastDigit;

	if (number < 0)
	{
		lastDigit = -1 * number % 10;
	}
	else
	{
		lastDigit = number % 10;
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}

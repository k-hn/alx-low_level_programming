#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of input values to sum
 *
 * Return: sum or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_pointer;
	unsigned int count;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args_pointer, n);

	for (count = 0; count < n; count++)
	{
		sum += va_arg(args_pointer, int);
	}

	va_end(args_pointer);

	return (sum);
}

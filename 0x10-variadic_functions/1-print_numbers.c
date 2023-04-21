#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: character that seperates printed numbers
 * @n: number of numbers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_pointer;
	unsigned int count;

	va_start(args_pointer, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (count = 0; count < n; count++)
	{
		printf("%d%s", va_arg(args_pointer, int), count == (n - 1) ? "" : separator);
	}
	printf("\n");

	va_end(args_pointer);
}

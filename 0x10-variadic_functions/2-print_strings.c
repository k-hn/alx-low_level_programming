#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: value separator
 * @n: number of input values
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list args_pointer;
	char *current_string = "";

	va_start(args_pointer, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (count = 0; count < n; count++)
	{
		current_string = va_arg(args_pointer, char *);

		printf("%s", current_string ? current_string : "(nil)");

		/* print seperator unless item is the last value in list */
		if (count < (n - 1))
		{
			printf("%s", separator);
		}
	}

	/* print newline */
	printf("\n");

	va_end(args_pointer);
}

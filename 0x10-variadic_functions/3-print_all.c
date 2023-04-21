#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: format of input variable parameters
 */
void print_all(const char * const format, ...)
{
	va_list args_pointer;
	int count = 0;
	char *str;
	char *sep = "";

	va_start(args_pointer, format);

	if (format)
	{
		while (format[count])
		{
			switch (format[count])
			{
				case 's':
					str = va_arg(args_pointer, char *);
					printf("%s%s", sep, str);
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args_pointer, double));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args_pointer, int));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args_pointer, int));
					break;
				default:
					count++;
					continue;
			}
			sep = ", ";
			count++;
		}
	}
	printf("\n");
	va_end(args_pointer);
}

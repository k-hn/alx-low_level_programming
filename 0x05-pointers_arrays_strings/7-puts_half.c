#include <string.h>
#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * @str: input string
 */
void puts_half(char *str)
{
	int str_length = strlen(str);
	int print_threshold = str_length / 2;
	int count;

	for (count = print_threshold; count < str_length; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}

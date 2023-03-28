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

	int count;

	if (str_length % 2 == 0)
	{
		for (count = str_length / 2; count < str_length; count++)
		{
			_putchar(str[count]);
		}
	}
	else
	{
		for (count = (str_length / 2) + 1; count < str_length; count++)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');

}

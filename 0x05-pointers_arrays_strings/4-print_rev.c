#include "main.h"
#include <string.h>

/**
 * print_rev - prints s reversed
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int count;
	int s_length = strlen(s);

	for (count = s_length - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}


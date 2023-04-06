/**
 * _print_rev_recursion - prints input string in reverse
 *
 * @s: input stinrg
 */
#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

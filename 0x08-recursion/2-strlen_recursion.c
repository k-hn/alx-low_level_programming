/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input string
 *
 * Return: length of string
 */
#include "main.h"

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

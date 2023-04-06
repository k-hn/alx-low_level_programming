#include "main.h"

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

/**
 * is_palindrome_helper - helper function
 *
 * @s: input string
 * @last_index: current last_index of interest
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int last_index)
{
	if (last_index < 1)
	{
		return (1);
	}

	if (*s == *(s + last_index))
	{
		return (is_palindrome_helper(s + 1, last_index - 2));
	}

	return (0);
}


/**
 * is_palindrome - checks if string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int s_length = _strlen_recursion(s);

	return (is_palindrome_helper(s, s_length - 1));
}

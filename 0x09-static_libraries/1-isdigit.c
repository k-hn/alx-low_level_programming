#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: input integer representing ASCII character
 *
 * Return:
 * 1 - if c is ASCII digit
 * 0 - if c is not ASCII digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - Determines if a character is lowercased or not
 *
 * @c - input character
 *
 * Return:
 * 1 - if c is lowercased
 * 0 - if c is not lowercased
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

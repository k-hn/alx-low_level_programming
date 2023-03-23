#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: input integer
 *
 * Return:
 * 1 - if character is lowercased
 * 0 - if character is not lowercased
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

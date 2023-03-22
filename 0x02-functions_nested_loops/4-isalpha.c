#include "main.h"
#include <stdbool.h>

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: input ASCII value of character
 *
 * Return:
 * 1 if c is an alphabet(lowercase or uppercase)
 * 0 if c is not alphabet
 */
int _isalpha(int c)
{
	bool alphaCheckPass;

	alphaCheckPass = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
	if (alphaCheckPass)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

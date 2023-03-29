#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @s: input string
 *
 * Return: converted string
 */
char *string_toupper(char *s)
{
	int count;
	
	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
		else
		{
			continue;
		}
	}

	return (s);
}

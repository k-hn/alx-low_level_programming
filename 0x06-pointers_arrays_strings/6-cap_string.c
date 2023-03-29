#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: input string
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count - 1] == ' ' && s[count] >= 'a' && s[count] <= 'z')
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

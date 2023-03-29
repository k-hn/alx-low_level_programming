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
	int i;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (i = 0; i < 13; i++)
		{
			if (s[count - 1] == spe[i] && s[count] >= 'a' && s[count] <= 'z')
			{
				s[count] = s[count] - 32;
			}
			else
			{
				continue;
			}
		}
	}

	return (s);
}

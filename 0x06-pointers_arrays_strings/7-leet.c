#include "main.h"

/**
 * leet - encodes a string to 1337
 *
 * @s: input string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *decoded = "aAeEoOtTlL";
	char *encoded = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; decoded[j] != '\0'; j++)
		{
			if (decoded[j] == s[i])
			{
				s[i] = encoded[j];
			}
		}
	}

	return (s);
}

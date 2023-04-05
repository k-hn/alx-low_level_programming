/**
 * _strchr - Returns a pointer to the first occurrence of
 * the character c in the string s or NULL
 *
 * @s: string to be searched
 * @c: character to search for
 *
 * Return: pointer to character or NULL
 */
#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);

	}
	/* return null pointer to indicate c not found */
	return ('\0');
}

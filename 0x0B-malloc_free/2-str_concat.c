#include "main.h"
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: input string one
 * @s2: input string two
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *accum;
	int count;
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);

	accum = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (accum == NULL)
	{
		return (NULL);
	}

	if (s1)
	{
		for (count = 0; s1[count] != '\0'; count++)
		{
			accum[count] = s1[count];
		}
	}

	if (s2)
	{
		for (count = 0; s2[count] != '\0'; count++)
		{
			accum[s1_length + count] = s2[count];
		}
	}

	accum[s1_length + s2_length] = '\0';

	return (accum);
}

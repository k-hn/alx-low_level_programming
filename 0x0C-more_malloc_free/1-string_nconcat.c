#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input string 1
 * @s2: input string 2
 * @n: numbers of bytes of s2 to concatenate to s1
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *accum;
	unsigned int s1_count, s2_count, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	accum = malloc(sizeof(char) * (s1_length + n + 1));
	if (accum == NULL)
		return (NULL);

	for (s1_count = 0; s1[s1_count] != '\0'; s1_count++)
	{
		accum[s1_count] = s1[s1_count];
	}

	for (s2_count = 0; s2[s2_count] != '\0' && s2_count < n; s2_count++)
	{
		accum[s1_count] = s2[s2_count];
		s1_count++;
	}

	accum[s1_count] = '\0';
	return (accum);
}

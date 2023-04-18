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
	unsigned int count;
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	accum = malloc(sizeof(*accum) * (s1_length + s2_length + 1));
	if (accum == NULL)
	{
		return (NULL);
	}

	/* copy s1 */
	for (count = 0; s1[count] != '\0'; count++)
	{
		accum[count] = s1[count];
	}

	/* copy s2 */
	for (count = 0; s2[count] != '\0' && count < n; count++)
	{
		accum[s1_length + count] = s2[count];
	}

	/* null terminate string and return */
	accum[s1_length + count] = '\0';

	return (accum);
}

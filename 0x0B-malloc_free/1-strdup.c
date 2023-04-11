#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of str
 *
 * @str: input string
 *
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *str_copy;
	int count;
	int str_length = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		str_length++;
	}
	
	str_copy = malloc((sizeof(char) * str_length) + 1);

	/* Return null if allocation fails */
	if (str_copy == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < str_length; count++)
	{
		str_copy[count] = str[count];
	}

	return (str_copy);
}

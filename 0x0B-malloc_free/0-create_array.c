#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * with specified size
 *
 * @size: size of array
 * @c: character to fill array
 *
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);
	for (count = 0; count < size; count++)
	{
		ar[count] = c;
	}

	return (ar);
}

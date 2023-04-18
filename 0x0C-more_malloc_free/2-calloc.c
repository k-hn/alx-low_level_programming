#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of array members
 * @size: size of array elements
 *
 * Return: pointer to array of NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int num_of_bytes, count;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	num_of_bytes = nmemb * size;
	arr = malloc(num_of_bytes);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < num_of_bytes; count++)
	{
		arr[count] = 0;
	}

	return (arr);
}

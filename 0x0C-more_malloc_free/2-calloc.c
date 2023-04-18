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
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}

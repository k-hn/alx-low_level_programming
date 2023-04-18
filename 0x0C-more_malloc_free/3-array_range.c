#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minimum number in range
 * @max: maximum number in range
 *
 * Return: array of integers or NULL
 */
int *array_range(int min, int max)
{
	int *int_arr;
	int size, count;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	int_arr = malloc(sizeof(int) * size);
	if (int_arr == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		int_arr[count] = min + count;
	}

	return (int_arr);
}

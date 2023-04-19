#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 *
 * @array: input array to search
 * @size: size of input array
 * @cmp: function that makes comparison
 *
 * Return: index of item or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (count = 0; count < size; count++)
	{
		if ((*cmp)(array[count]) != 0)
		{
			return (count);
		}
	}

	return (-1);
}

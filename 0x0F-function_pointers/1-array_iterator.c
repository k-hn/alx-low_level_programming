#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function on each array member
 *
 * @array: input array of ints
 * @size: size of array
 * @action: function that acts on array members
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (action == NULL)
	{
		return;
	}

	for (count = 0; count < size; count++)
	{
		(*action)(array[count]);
	}
}

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes to allocate
 *
 * Return: void pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	{
		return (98);
	}

	return (result);
}

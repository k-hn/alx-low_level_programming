/**
 * _memcpy - copies n buytes from memory area src
 * to memory area dest
 *
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}

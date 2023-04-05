/**
 *_memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @s: pointer to memory area
 * @b: constant byte that is used to fill memory
 * @n: number of bytes to be filled
 *
 * Return: pointer s
 */
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}

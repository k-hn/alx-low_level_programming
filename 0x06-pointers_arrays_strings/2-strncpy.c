#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}

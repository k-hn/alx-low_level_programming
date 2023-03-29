#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be concatenated onto
 * @src: string to concatenate
 * @n: number of bytes
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length;
	int count;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
	{
		continue;
	}


	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		int append_position = dest_length + count;

		dest[append_position] = src[count];
	}

	dest[dest_length + count] = '\0';
	return (dest);
}

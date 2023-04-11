/**
 * _strstr - finds the first occurrence of `needle` in
 * `haystack`
 *
 * @needle: substring to search for
 * @haystack: string to search
 *
 * Return: pointer to beginning of needle or NULL
 */
#include "main.h"
#include <stdbool.h>

char *_strstr(char *haystack, char *needle)
{
	int out_count, in_count;

	for (out_count = 0; haystack[out_count] != '\0'; out_count++)
	{
		for (in_count = 0; needle[in_count]; in_count++)
		{
			if (haystack[out_count + in_count] != needle[in_count])
				break;
		}

		if (needle[in_count] == '\0')
			return (haystack + out_count);
	}
	return ('\0');
}

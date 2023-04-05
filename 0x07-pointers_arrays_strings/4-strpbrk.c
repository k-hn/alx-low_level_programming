/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept.
 *
 * @s: input string
 * @accept: accept criteria
 *
 * Return: pointer to the found byte in s or NULL.
 */
#include "main.h"
#include <stdbool.h>

char *_strpbrk(char *s, char *accept)
{
	int in_count, out_count;
	bool found = false;

	for (out_count = 0; s[out_count] != '\0'; out_count++)
	{
		for (in_count = 0; accept[in_count]; in_count++)
		{
			if (s[out_count] == accept[in_count])
			{
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	return (s + out_count);
}

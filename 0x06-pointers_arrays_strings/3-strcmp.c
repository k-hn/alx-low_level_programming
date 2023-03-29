#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: return difference as integer
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int result = 0;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			result = s1[count] - s2[count];
			break;
		}
	}

	return (result);
}

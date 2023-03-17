#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all the lowercase alphabets except the alphates e and q.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'e' || character == 'q')
		{
			continue;
		}
		putchar(character);
	}
	putchar('\n');

	return (0);
}

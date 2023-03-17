#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all the lowercase alphabets in reverse.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}

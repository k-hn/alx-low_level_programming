#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints
 * all the numbers of base 16 in lowercase.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		putchar(character);
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}

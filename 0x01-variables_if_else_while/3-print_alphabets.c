#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all the lowercase alphabets followed by all uppercase
 * alphabets.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	for (character = 'A'; character <= 'Z'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}

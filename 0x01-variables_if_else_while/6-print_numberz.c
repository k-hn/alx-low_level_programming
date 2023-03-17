#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all single digit numbers in base 10 using putchar.
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
	putchar('\n');

	return (0);
}

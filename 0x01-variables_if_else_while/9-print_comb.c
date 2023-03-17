#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all possible combinations of single-digit numbers
 * separated by commas.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	char character;

	for (character = '0'; character <= '9'; character++)
	{
		putchar(character);
		if ( character == '9')
		{
			continue;
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

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
	int counter;

	for (counter = 48; counter <= 57; counter++)
	{
		putchar(counter);
	}
	putchar('\n');

	return (0);
}

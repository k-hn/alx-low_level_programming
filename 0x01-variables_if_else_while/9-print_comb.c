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
	int counter;

	for (counter = 48; counter <= 57 ; counter++)
	{
		putchar(counter);
		if (counter == 57)
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

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all single digit numbers in base 10.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		printf("%d", count);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all possible different combinations of two digits
 *
 * Return: 0 - Always success
 */

int main(void)
{
	int first_digit;
	int second_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= '9'; second_digit++)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (first_digit == '8' && second_digit == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

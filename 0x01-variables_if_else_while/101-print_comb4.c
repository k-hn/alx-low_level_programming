#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints that prints
 * all possible different combinations of three digits.
 *
 * Return: 0 - Always success
 */

int main(void)
{
	int first_digit;
	int second_digit;
	int third_digit;

	for (first_digit = '0'; first_digit <= '9'; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit <= '9'; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit <= '9'; third_digit++)
			{


				putchar(first_digit);
				putchar(second_digit);
				putchar(third_digit);
				if (first_digit == '7' && second_digit == '8' && third_digit == '9')
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
	}
	putchar('\n');

	return (0);
}

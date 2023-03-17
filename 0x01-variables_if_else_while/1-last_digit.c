#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints whether the last digit
 * of n is greater than 5, is 0, or less than 6 and not 0
 *
 * Return: 0 - Always success
 */

int main(void)
{
	int n;
	int last_digit;
	char comparison_outcome[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* get last digit of n */
	last_digit = n % 10;
	if (last_digit > 5)
	{
		strcpy(comparison_outcome, "and is greater than 5");
	}
	else if (last_digit == 0)
	{
		strcpy(comparison_outcome, "and is 0");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		strcpy(comparison_outcome, "and is less than 6 and not 0");
	}

	printf("Last digit of %d is %d %s\n", n, last_digit, comparison_outcome);

	return (0);
}

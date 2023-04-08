#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 1 if failure, 0 if success
 */
int main(int argc, char *argv[])
{
	int cents, temp, twenty_fives, tens, fives, twos, ones;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}


	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		temp = cents;

		twenty_fives = cents / 25;
		temp = temp - (twenty_fives * 25);

		tens = temp / 10;
		temp = temp - (tens * 10);

		fives = temp / 5;
		temp = temp - (fives * 5);

		twos = temp / 2;

		ones = temp - (twos * 2);

		printf("%d\n", twenty_fives + tens + fives + twos + ones);
	}

	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 - success
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("%s\n", "FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("%s\n", "Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("%s\n", "Buzz");
		}
		else
		{
			printf("%d\n", count);
		}
	}
	return (0);
}

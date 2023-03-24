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
			printf("%s ", "FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("\n");
	return (0);
}

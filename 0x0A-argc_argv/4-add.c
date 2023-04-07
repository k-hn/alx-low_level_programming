#include <stdlib.h>
#include <stdio.h>

/**
 * isDigit - determines if str represents a number
 *
 * @str: input string
 *
 * Return: 0 if false, 1 if true
 */
int isDigit(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 - always success
 */
int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (count = 1; count < argc; count++)
	{
		if (!isDigit(argv[count]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);
	return (0);
}

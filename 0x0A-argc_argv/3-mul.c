#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 - successful, or 1 - error
 */
int main(int argc, char *argv[])
{
	long a, b;
	
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = strtol(argv[1], NULL, 10);
	b = strtol(argv[2], NULL, 10);

	printf("%ld\n", a * b);

	return (0);
}

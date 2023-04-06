#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 - always successful
 */
int main(int argc, char *argv[])
{
	char *program_name = argv[argc - 1];

	printf("%s\n", program_name);

	return (0);
}

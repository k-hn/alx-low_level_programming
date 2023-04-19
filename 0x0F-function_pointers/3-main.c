#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 - successful
 */
int main(int argc, char *argv[])
{
        int a;
	int b;
	int (*operator)(int, int);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	

	if (operator == NULL)
	  {
	    printf("Error\n");
	    exit(99);
	  }

	printf("%d\n", operator(a, b));

	return (0);
}

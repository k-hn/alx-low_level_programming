/**
 * print_diagsums - Prints the sum of the two diagonals
 *
 * @a: input array
 * @size: input size of square array
 */
#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int count;
	int forward_diagonal_sum = 0;
	int backward_diagonal_sum = 0;

	for (count = 0; count < size; count++)
	{
		forward_diagonal_sum += a[(size * count) + count];
		backward_diagonal_sum += a[(size * (count + 1)) - (count + 1)];
	}

	printf("%d, %d\n", forward_diagonal_sum, backward_diagonal_sum);
}

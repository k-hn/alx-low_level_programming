#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 *
 * @a: input array
 * @n: input print count
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count == n - 1)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}

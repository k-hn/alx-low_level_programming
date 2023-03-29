#include "main.h"

/**
 * reverse_array - reverses array a
 *
 * @a: input array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int start;
	int temp;
	int end = n - 1;

	for (start = 0; start < end; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
	}
}

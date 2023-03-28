#include "main.h"

/**
 * swap_int - swap the values of a and b
 *
 * @a: input pointer to value of a
 * @b: input pointer to value of b
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

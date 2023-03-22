#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from `n`
 * to 98, followed by a new line
 *
 * @number: input
*/

void print_to_98(int number)
{
	int count;

	if (number > 98)
		for (count = number; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = number; count < 98; ++count)
			printf("%d, ", count);
	printf("98\n");
}

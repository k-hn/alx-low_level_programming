#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog struct
 *
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (d->age)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}

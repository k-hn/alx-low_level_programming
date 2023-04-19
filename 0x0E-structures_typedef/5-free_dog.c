#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to dog struct
 *
 * @d: input dog struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	/* free dog struct memory */
	free(d->name);
	free(d->owner);
	free(d);
}

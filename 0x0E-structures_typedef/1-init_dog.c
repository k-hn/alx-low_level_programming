#include "dog.h"
#include <stddef.h>

/**
 * init_dog - intialize a variable of type struct dog
 *
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

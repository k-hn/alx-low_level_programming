#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 *
 * Return: dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* malloc memory for dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	/* set dog values */
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

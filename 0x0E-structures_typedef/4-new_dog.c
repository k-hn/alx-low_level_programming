#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int name_length = strlen(name);
	int owner_length = strlen(owner);

	/* malloc memory for dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	/* malloc for name and owner */
	dog->name = malloc(sizeof(char) * (name_length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	/* set dog values */
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - dog structure
 *
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif

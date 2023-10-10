#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the variable
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner; }
}

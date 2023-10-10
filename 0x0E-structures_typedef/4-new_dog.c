#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: pointer of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptrdog;

	ptrdog = (dog_t *)malloc(sizeof(struct dog));
	if (ptrdog == NULL)
		return (NULL);

	ptrdog->name = name;
	ptrdog->age = age;
	ptrdog->owner = owner;
	return (ptrdog);
}

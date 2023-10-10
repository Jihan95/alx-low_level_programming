#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	ptrdog->name = (char *)malloc(strlen(name) + 1);
	if (ptrdog->name == NULL)
	{
		free(ptrdog);
		return (NULL);
	}
	strcpy(ptrdog->name, name);

	ptrdog->owner = (char *)malloc(strlen(owner) + 1);
	if (ptrdog->owner == NULL)
	{
		free(ptrdog);
		free(ptrdog->name);
		return (NULL);
	}
	strcpy(ptrdog->owner, owner);

	ptrdog->age = age;
	return (ptrdog);
}

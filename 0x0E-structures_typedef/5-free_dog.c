#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free all the memory allocated by the function dog_t*
 * @d: the pointer to the allocated memory
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
       		free(d); } 
}

#include <stdio.h>
#include "dog.h"
#define MISSING "(nil)"
/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct type variable
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : MISSING);
	printf("Age: %f\n", (d->age < 0) ? d->age : printf("Age: %s\n", MISSING));
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : MISSING);
}

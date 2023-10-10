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
	if (d->age < 0)
		printf("Age :%s\n", MISSING);
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : MISSING);
}

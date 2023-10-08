#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the memmory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	if (b == 0 || b == INT_MAX)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

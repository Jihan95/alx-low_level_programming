#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: the size of the array
 * @c: the intialization value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		p = NULL;
	else
	{
		p = malloc(sizeof(char) * size);
		p[0] = c;
	}
	return (p);
}

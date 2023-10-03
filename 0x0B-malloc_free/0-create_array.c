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
	unsigned int i;

	p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			*(p + i) = c;
		return (p);

	}
	else
		return (NULL);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the first dimension array
 * @height: the second dimension array
 *
 * Return: a pointer to the new array
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL); }
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}

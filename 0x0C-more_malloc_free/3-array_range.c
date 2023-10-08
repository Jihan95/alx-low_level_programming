#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the first number ot the array.
 * @max: the last number at the array.
 *
 * Return: the pointer to the array.
 */

int *array_range(int min, int max)
{
	int *p;
	int array_length, i, num;

	if (min > max)
		return (NULL);
	array_length = max - min + 1;
	p =  (int *)malloc(array_length * sizeof(int));
	if (p == NULL)
		return (NULL);
	num = min;
	for (i = 0; i < array_length; i++)
	{
		p[i] = num;
		num++; }
	return (p);
}

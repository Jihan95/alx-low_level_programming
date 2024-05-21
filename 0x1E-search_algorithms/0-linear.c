#include "search_algos.h"

/**
 * linear_search - searches in an array Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i); }
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}

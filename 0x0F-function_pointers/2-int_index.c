#include "function_pointers.h"

/**
 * int_index - searches for an integer at array
 * @array: elements to search at
 * @size: number of elements at array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of number at the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}

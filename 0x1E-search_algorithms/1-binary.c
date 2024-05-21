#include "search_algos.h"

/**
 * binary_search - searches in an array Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array != NULL)
	{
		while (left <= right)
		{
			printf("Searching in array: ");
			mid = left + (right - left) / 2;
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);
			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
		}

	}
	return (-1);
}

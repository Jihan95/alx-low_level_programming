#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first passed integer
 * @b: second passed integer
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : is the size of the triangle
 *
 * Description : draws a triangle using # character
 * If n is 0 or less, the function should only print \n
 *
 */

void print_triangle(int size)

{
	int j, i, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = i; k > 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

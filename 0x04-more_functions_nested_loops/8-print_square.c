#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size : is the size of the square
 *
 * Description : draws a square using # character
 * If n is 0 or less, the function should only print \n
 *
 */

void print_square(int size)

{
	int j, i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

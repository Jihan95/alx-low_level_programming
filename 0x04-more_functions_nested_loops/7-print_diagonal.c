#include "main.h"

/**
 * print_diagonal - draws a diagonal in the terminal
 * @n:is the # of times the character\should be printed
 *
 * Description : draws a diagonal in the terminal
 * The diaginal should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 */

void print_diagonal(int n)

{
	int j, i;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 1; i <= j; i++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character_should be printed
 *
 * Description : draws a straight line in the terminal
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 *
 */

void print_line(int n)

{
	int j;

	if (n > 0)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Description: prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, cross;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	cross = i * j;
			if (cross <= 9)
				_putchar(cross + '0');
			else
			{	_putchar(cross / 10 + '0');
				_putchar(cross % 10 + '0');
			}

			if (j < 9)
			{	_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

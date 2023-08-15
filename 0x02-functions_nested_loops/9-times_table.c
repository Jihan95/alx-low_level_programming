#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Description: prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j, cross, cross_next;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	cross = i * j;
			cross_next = i * (j + 1);
			if (cross_next <= 9)
			{	_putchar(cross + '0');
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(' '); }
			}
			else
			{
				if (cross > 9)
				_putchar(cross / 10 + '0');
				_putchar(cross % 10 + '0');
				if (j < 9)
				{_putchar(',');
					_putchar(' '); }
			}
		}
		_putchar('\n');
	}
}

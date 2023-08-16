#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 *@n: the required time table
 */

void print_times_table(int n)
{
	int i, j, cross, cross_next;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{	cross = i * j;
				cross_next = i * (j + 1);
				if (cross < 9 && cross_next <= 9)
				{
					_putchar(cross + '0');
					if (j < n)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' '); }
				}
				else if (((cross < 9) && (cross_next > 9)) || ((cross > 9) && (cross < 99) && (cross_next <= 99)))
				{
					_putchar(cross / 10 + '0');
					_putchar(cross % 10 + '0');
					if (j < n)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' '); } }
				else
				{
					_putchar(cross / 10 + '0');
					_putchar(cross % 10 + '0');
					_putchar(cross % 100 + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' '); }
				}
			}
		_putchar('\n'); }
	}
}

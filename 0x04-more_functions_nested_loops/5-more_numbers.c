#include "main.h"

/**
 * more_numbers - printsfrom 0 to 14
 *
 * Description : prints the numbers, from 0 to 14
 * , followed by a new line.
 *
 */

void more_numbers(void)

{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		i = 0;
	do {
		if (i >= 10)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		i = i + 1;
	} while (i <= 14);
	_putchar('\n'); }
}

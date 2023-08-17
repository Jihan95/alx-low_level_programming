#include "main.h"

/**
 * print_most_numbers-prints 10 base numbers except for 2&4
 *
 * Description : prints the numbers, from 0 to 9
 * except for 2 and 4, followed by a new line.
 *
 */

void print_most_numbers(void)

{
	char c = '0';

	do {
		if (c != 50 && c != 52)
			_putchar(c);
		c = c + 1;
	} while (c <= '9');
	_putchar('\n');
}

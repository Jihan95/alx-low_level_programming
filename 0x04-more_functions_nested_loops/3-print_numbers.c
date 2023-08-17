#include "main.h"

/**
 * print_numbers - prints 10 base numbers
 *
 * Description : prints the numbers, from 0 to 9
 * , followed by a new line.
 *
 */

void print_numbers(void)

{
	char c = '0';

	do {
		_putchar(c);
		c = c + 1;
	} while (c <= '9');
	_putchar('\n');
}

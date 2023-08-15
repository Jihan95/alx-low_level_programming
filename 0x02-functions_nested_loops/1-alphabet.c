#include "main.h"

/**
 * print_alphabet -  prints alphabet in lower case
 *
 * Description : prints alphabet in lower case
 *
 */

void print_alphabet(void)

{
	char c = 'a';

	do {
		_putchar(c);
		c = c + 1;
	} while (c <= 'z');
	_putchar('\n');
}

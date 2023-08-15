#include "main.h"

/**
 * print_alphabet_x10 -  prints alphabet in lower case
 *
 * Description : prints alphabet in lower case
 * ten times
 */

void print_alphabet_x10(void)

{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		do {
			_putchar(c);
			c = c + 1;
		} while (c <= 'z');
		_putchar('\n');
	}
}

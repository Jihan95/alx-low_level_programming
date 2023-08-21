#include "main.h"

/**
 * puts2 - rints every other character of a string.
 * @str: passed string
 */

void puts2(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - rints every other character of a string.
 * @str: passed string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i] != '\\' ; i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}

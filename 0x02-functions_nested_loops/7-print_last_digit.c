#include "main.h"

/**
 *print_last_digit - returns the last digit of passed integer
 *@r: the passed integer
 *
 *Return: the last digit of passed integer
 */

int print_last_digit(int r)
{
	int n = r % 10;

	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}

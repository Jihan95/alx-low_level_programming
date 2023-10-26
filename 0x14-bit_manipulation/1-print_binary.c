#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: the decimal value of the number
 */

void print_binary(unsigned long int n)
{
	int i = 0, k;

	if (n == 0)
		_putchar('0');
	while (n > power(2, i))
		i++;
	if (n < power(2, i))
		i--;
	for (k = i; k >= 0; k--)
	{
		if (n >= power(2, k))
		{
			n -= power(2, k);
			_putchar('1');
		}
		else
			_putchar('0');
	}
}

/**
 * power - calculates x to the power y
 * @x: the base number
 * @y: the power
 *
 * Return: the result
 */

unsigned int power(int x, int y)
{
	unsigned int result = 1;

	if (y == 0)
		return (1);
	while (y > 0)
	{
		result *= x;
		y--;
	}
	return (result);
}

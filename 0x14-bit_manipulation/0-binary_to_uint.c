#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i, numLen = strlen(b);
	unsigned int num = 0;

	if (b == NULL)
		return (num);
	for (i = numLen - 1; i >= 0; i--)
	{
		if (b[numLen - i - 1] == '1')
			num += power(2, i);
		else if (b[numLen - i - 1] == '0')
			num = num;
		else
			return (0);
	}
	return (num);
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

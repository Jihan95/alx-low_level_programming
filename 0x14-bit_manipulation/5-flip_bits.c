#include "main.h"

/**
 * flip_bits - calculates number of bits needs to be changes for two numbers
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int size = sizeof(unsigned long int) * 8;

	for (i = 0; i < size; i++)
	{
		if ((m & 1) != (n & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}
	return (count);
}

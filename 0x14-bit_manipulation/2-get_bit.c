#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index of the bit
 *
 * Return: returns the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);
	return (bit & 1);
}

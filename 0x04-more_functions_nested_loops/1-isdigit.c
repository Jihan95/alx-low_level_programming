#include "main.h"

/**
 * _digit -  checks if input is a digit
 *@c : the ascii code of the passed char
 *
 * Return: (1) if c is digit and (0) otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

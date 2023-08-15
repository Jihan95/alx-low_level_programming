#include "main.h"

/**
 * _islower -  checks if input is lowercase char;
 *@c : the ascii code of the passed char
 *
 * Return: (1) if c is lower case and (0) otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

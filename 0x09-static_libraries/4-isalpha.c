#include "main.h"

/**
 *_isalpha - checks if input is alphabet
 *@c : the ascii code of the passed char
 *
 * Return: (1) if c is a letter and (0) otherwise
 */

int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

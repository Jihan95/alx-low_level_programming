#include "main.h"

/**
 *_abs - taking absolute value of passed integer
 *@r: the passed integer
 *
 *Return: the absolute value
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{	return (-r);
	}
	else
	{	return (0);
	}
}

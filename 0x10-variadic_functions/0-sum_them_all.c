#include "variadic_functions.h"

/**
 * sum_them_all - add all of its parametes
 * @n: the number of passed parameteres
 *
 * Return: the result of addition process
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list allNumbers;

	if (n == 0)
		return (0);
	va_start(allNumbers, n);
	for (i = 0; i < n; i++)
		result += va_arg(allNumbers, int);
	va_end(allNumbers);
	return (result);
}

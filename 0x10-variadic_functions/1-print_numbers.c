#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list allNumbers;

	if (n == 0)
		return;
	va_start(allNumbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != (n - 1))
			printf("%d%s", va_arg(allNumbers, int), separator);
		else
			printf("%d ", va_arg(allNumbers, int));
	}
	printf("\n");
	va_end(allNumbers);
}

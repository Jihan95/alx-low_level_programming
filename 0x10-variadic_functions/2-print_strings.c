#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list allstrings;

	if (n == 0)
	{
		printf("\n");
		return; }
	va_start(allstrings, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != (n - 1))
			printf("%s%s", va_arg(allstrings, char *), separator);
		else
			printf("%s", va_arg(allstrings, char *));
	}
	printf("\n");
	va_end(allstrings);
}

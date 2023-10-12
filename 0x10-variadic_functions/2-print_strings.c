#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list allstrings;

	if (n == 0)
	{
		printf("\n");
		return; }
	va_start(allstrings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(allstrings, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator != NULL && i != (n - 1))
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(allstrings);
}

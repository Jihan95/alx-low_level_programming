#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	char current_format;
	int printed = 0, k = 1;

	va_start(args, format);
	current_format = *format;
	while ((current_format) != '\0')
	{
		if (printed >= 1)
			printf(", ");
		if (current_format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
			printed++; }
		else if (current_format == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
			printed++; }
		else if (current_format == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
			printed++; }
		else if (current_format == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
			printf("%s", s);
			printed++; }
	current_format = *(format + k);
	k++; }
	va_end(args);
	printf("\n"); }

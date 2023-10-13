#include "variadic_functions.h"

/**
  * print_all - prints passed arguments
  * @format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	size_t formatlen;
	char *formatCpy, *str;
	va_list allargs;

	formatlen = strlen(format);
	formatCpy = (char *)malloc(formatlen + 1);
	strcpy(formatCpy, format);
	va_start(allargs, format);
	while (*formatCpy)
	{
		switch (*formatCpy)
		{
			case 'c':
				printf("%c", va_arg(allargs, int));
				break;
			case 'i':
				printf("%d", va_arg(allargs, int));
				break;
			case 'f':
				printf("%f", va_arg(allargs, double));
				break;
			case 's':
				str = va_arg(allargs, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				formatCpy++;
				continue; }
		if (*(formatCpy + 1))
			printf(", ");
		formatCpy++;
	}
	printf("\n");
	va_end(allargs);
}

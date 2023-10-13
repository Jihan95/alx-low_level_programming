#include "variadic_functions.h"

 /**
  * print_all - prints passed arguments
  * @format: is a list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	size_t formatlen;
	char *formatCpy;
	va_list allargs;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	formatlen = strlen(format);
	formatCpy = (char *)malloc(formatlen + 1);
	if (formatCpy != NULL)
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
				printf("%s", va_arg(allargs, char *));
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

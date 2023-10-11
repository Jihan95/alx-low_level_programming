#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (f != NULL && name != NULL)
		(*f)(name);
}

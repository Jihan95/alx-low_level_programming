#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: the name to be printed
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

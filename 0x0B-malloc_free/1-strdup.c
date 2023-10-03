#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a given string to a new located part at memory
 * @str: the given string
 *
 * Return: a pointer to the new array
 */

char *_strdup(char *str)
{
	char *p, *pos = str;
	int i, str_length = 0;

	while(*pos != '\0')
	{
		pos += 1;
		str_length += 1;
	}

	p = (char *) malloc(str_length * sizeof(char));

	if (p == NULL)
		return (NULL);

	if (str != NULL)
	{
		for (i = 0; i < str_length; i++)
			*(p + i) = *(str + i);
		return (p);

	}
	else
		return (NULL);
}

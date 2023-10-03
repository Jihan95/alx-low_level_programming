#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinate 2 passed strings at a new located part at memory
 * @s1: the first passed string
 * @s2: the second passed string
 *
 * Return: a pointer to the new array
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j = 0, k = 0, str_length = 0;


	while (*(s1 + k) != '\0')
	{
		str_length += 1;
		k++;
		}

	while (*(s2 + j) != '\0')
	{
		str_length += 1;
		j++;
	}

	p = (char *) malloc(str_length * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		*(p + i) = *(s1 + i);

	for (i = k; i < str_length; i++)
		*(p + i) = *(s2 + i - k);

	p[str_length] = '\0';
	return (p);
}

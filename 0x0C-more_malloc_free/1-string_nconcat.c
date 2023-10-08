#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first passed string
 * @s2: second passed string
 * @n: the first n bytes of s2
 *
 * Return: a pointer to the new string the contains the two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= sizeof(s2))
		p = (char *)malloc(sizeof(s1) + sizeof(s2) - 1);
	else
		p = (char *)malloc(sizeof(s1) + n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= (int)strlen(s1); i++)
		p[i] = s1[i];

	for (j = i; j <= (int)(n / sizeof(char)); j++)
		p[j] = s2[j - i];

	p[j] = '\0';
	return (p);
}

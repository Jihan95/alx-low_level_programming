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
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = strlen(s2);

	p = (char *)malloc(len1 + n + 1);

	if (p == NULL)
		return (NULL);
	memcpy(p, s1, len1);
	memcpy(p + len1, s2, len2);
	p[len1 + n] = '\0';
	return (p);
}

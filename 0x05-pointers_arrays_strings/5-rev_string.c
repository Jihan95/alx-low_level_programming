#include "main.h"

/**
 * rev_string - reverses a string
 * @s: passed string
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (j = 0; j <= (len / 2); j++)
	{
		c = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = c;
	}
}

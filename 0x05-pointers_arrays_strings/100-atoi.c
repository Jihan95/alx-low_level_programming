#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: passed string
 *
 * Return: the numerical value of passed string
 */

int _atoi(char *s)
{
	int num = 0, i, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - 48);
			if (s[i + 1] == ' ')
				break;	}
		else if (s[i] == 45)
			sign = sign * -1;
		else if (s[i + 1] <= 48 && s[i + 1] >= 57)
			break;
	}
	return (sign * num);
}

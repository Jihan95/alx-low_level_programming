#include <stdio.h>

/**
 * main-program that prints two-digit numbers.
 * Description: program that prints all possible
 * combinations of two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j && i < j)
			{	putchar ('0' + i);
				putchar ('0' + j);
				if (!(i == 8 && j == 9))
				{	putchar (',');
					putchar (' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

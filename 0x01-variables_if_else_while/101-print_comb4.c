#include <stdio.h>

/**
 * main-program that prints three-digit numbers.
 * Description: program that prints all possible
 * combinations of three-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i != j && i < j && j < k)
				{	putchar ('0' + i);
					putchar ('0' + j);
					putchar ('0' + k);
					if (!(i == 7 && j == 8 && k == 9))
					{	putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

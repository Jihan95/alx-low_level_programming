#include <stdio.h>

/**
 * main-program that prints single-digit numbers.
 * Description: program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' '); }
	}

	putchar('\n');

	return (0);
}

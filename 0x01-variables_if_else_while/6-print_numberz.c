#include <stdio.h>

/**
 * main - all base 10 numbers
 *
 * Description: program will prints all base 10 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}

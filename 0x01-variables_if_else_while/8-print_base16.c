#include <stdio.h>

/**
 * main - all base 16 numbers
 *
 * Description: program will prints all base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	do {
		putchar(c);
		c = c + 1;
	} while (c <= 'f');

	putchar('\n');

	return (0);
}

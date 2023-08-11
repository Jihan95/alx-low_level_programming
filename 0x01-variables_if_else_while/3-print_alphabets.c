#include <stdio.h>

/**
 * main - prints alphapets
 *
 * Description: program will prints ll alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	do {
		putchar(c);
		c = c + 1;
	} while (c <= 'z');

	do {
		putchar(C);
		C = C + 1;
	} while (C <= 'Z');
	putchar('\n');

	return (0);
}

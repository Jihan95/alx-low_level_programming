#include <stdio.h>

/**
 * main - prints alphapets
 *
 * Description: program will prints all alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c = c + 1;
	} while (c <= 'z');

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - prints alphapets
 *
 * Description: program will prints all alphabet in lower case
 * in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c = c - 1;
	} while (c >= 'a');

	putchar('\n');

	return (0);
}

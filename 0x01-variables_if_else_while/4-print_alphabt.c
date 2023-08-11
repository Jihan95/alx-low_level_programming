#include <stdio.h>

/**
 * main - prints alphapets execpt q and e
 *
 * Description: program will prints all alphabet in lower case
 * exept for letter q and letter e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	do {
		if (c != 'q' && c != 'e')
			putchar(c);
		c = c + 1;
	} while (c <= 'z');

	putchar('\n');
	return (0);
}

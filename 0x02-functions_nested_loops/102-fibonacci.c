#include <stdio.h>

/**
 * main - main block
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * numbers muct be separated by comma
 * Return: 0 always success
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	int i = 3;
	long int next = first + second;

	printf("%ld, ", first);
	printf("%ld, ", second);

	do {
		if (i == 50)
			printf("%ld\n", next);
		else
			printf("%ld, ", next);

		first = second;
		second = next;
		next = first + second;
		i++;
	} while (i <= 50);
return (0); }

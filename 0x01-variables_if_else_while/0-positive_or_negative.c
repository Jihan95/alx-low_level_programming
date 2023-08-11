#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to a variable n
 * and determines if it is positive or negative or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}

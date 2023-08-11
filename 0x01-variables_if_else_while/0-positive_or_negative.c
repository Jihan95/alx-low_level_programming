#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main function  - checks the sign of randomly generated number
 * @n : represents the rondamly generated number
 * Description: checks if a random generated number is +ve or -ve or zero
 * Return: 0 - always success
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

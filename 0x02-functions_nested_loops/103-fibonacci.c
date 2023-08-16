#include <stdio.h>

/**
 * main - main block
 * Description: By considering the terms in
 * the Fibonacci sequence whose values do not
 * exceed 4,000,000, write a program that finds
 * and prints the sum of the even-valued terms
 * , followed by a new line.
 * Return: 0 always success
 */

int main(void)
{
	long int first = 1;
	long int second = 2;
	long int next = first + second;

	printf("%ld, ", second);

	while (next <= 4000000)
	{
		if (next % 2 == 0)
		{
			printf("%ld, ", second);
		}
		first = second;
		second = next;
		next = first + second;
	}
return (0); }

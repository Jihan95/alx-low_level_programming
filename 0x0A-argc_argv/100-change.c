#include <stdio.h>
#include <stdlib.h>

/**
 * main - the minimum number of coins to make change for an amount of money
 * @argc: number of arguments at command line
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: 0 incase of sucess, and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int first = 0, second = 0, third = 0, fourth = 0, fifth = 0;

	if (argc == 2)
	{
		int num = atoi(argv[1]);

		if (num > 0)
		{
			first = num / 25;
			second = (num - first * 25) / 10;
			third = (num - first * 25 - second * 10) / 5;
			fourth = (num - first * 25 - second * 10 - third * 5) / 2;
			fifth = num - first * 25 - second * 10 - third * 5 - fourth * 2;
			printf("%d\n", first + second + third + fourth + fifth);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

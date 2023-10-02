#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isNumber(char *n);

/**
 * main - adds positive numbers
 * @argc: number of arguments at command line
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: 0 incase of sucess, and 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 2)
	{
	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]))
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		}
	printf("%d\n", sum);
		}
	else
		{
			printf("0\n");
		}
	return (0);
}

/**
 * isNumber - checks if passed string is numeric
 * @n: passed string
 *
 * Return: 1 string is number, 0 otherwise
 */

int isNumber(char *n)
{
	int i = strlen(n);
	int isnum = (i > 0);

	while (i-- && isnum)
	{
		if (!(n[i] >= '0' && n[i] <= '9'))
			isnum = 0;
	}
	return (isnum);
}

#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments at command line
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0); }

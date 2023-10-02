#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments at command line
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: always return 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0); }

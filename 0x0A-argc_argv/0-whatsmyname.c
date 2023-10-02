#include <stdio.h>

/**
 * main - prints the program name
 * @argc: number of arguments at command line
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: always return 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0); }

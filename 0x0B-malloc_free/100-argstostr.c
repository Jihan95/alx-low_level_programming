#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr -  concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: the array contains the arguments
 *
 * Return: a pointer to new string, null in case of failure
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k = 0, length, total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = 0;
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		total_length += length + 1;
	}

	p = (char *) malloc(total_length * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p[k++] = av[i][j];
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}

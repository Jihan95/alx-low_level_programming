#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words.
 * @str: passed string
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **words;
	int i, j, numOfWords = 0, maxnoOfLetters = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (str[j] != ' ')
			j++;
		if (maxnoOfLetters < j)
			maxnoOfLetters = j;

		numOfWords += 1;
	}
	words = (char **) malloc(numOfWords * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < maxnoOfLetters; i++)
	{
		words[i] = (char *) malloc(maxnoOfLetters * sizeof(char));
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
		}
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != ' '; j++)
			words[i][j] = str[i+j];
	}
	return (words);
}

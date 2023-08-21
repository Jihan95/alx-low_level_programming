#include "main.h"

/**
 *_strcpy - copies the string to another
 * @src: string required to be copied
 * @dest: the new destination
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, i;

	for (i = 0; src[i] != '\0'; i++)
		length++;

	for (i = 0; i < length; i++)
		dest[i] = src[i];
	dest[i] = '\0';


return (dest); }

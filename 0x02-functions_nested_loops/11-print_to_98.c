#include "main.h"
#include <stdio.h>

/**
 *print_to_98-  prints from certain number to 98
 *@n: the passed certain number
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	for (i = n; i < 98; i++)
		printf("%d, ", i);
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("98\n");
}

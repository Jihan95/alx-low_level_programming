#include <stdio.h>

/**
 * main-program that prints four-digit numbers.
 * Description: program that prints all possible
 * combinations of four-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{int i, j, k, l;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 8; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 1; l <= 9; l++)
{
if (i <= j && k <=l)
{
putchar ('0' + i);
putchar ('0' + j);
putchar (' ');
putchar ('0' + k);
putchar ('0' + l);
}
else if (!(i == 9 && j == 8 && k == 9 && l == 9))
{putchar (',');
putchar (' ');
}
}
}
}
}
putchar('\n');
return (0);
}

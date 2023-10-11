#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of the two passed integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two inegers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference between them
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: number of arguments
 * @argv: a vector of length argc contains the arguments of command line
 *
 * Return: 0 - always success
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]), num2 = atoi(argv[3]), result;
	char *operator = argv[2];
	int (*ptrop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptrop = get_op_func(operator);
	if (ptrop == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((ptrop == op_div || ptrop == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100); }
	result = ptrop(num1, num2);
	printf("%d\n", result);

return (0); }

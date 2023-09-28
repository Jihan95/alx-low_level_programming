#include "main.h"

/**
 * checker - check if number is prime
 *
 * @i : iterative variable
 * @n : the number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int checker(int i, int n)
{
	if (n <= 2)
		return (n == 2);
	if (i * i == n)
		return (1);
	if (i * i > n)
		return (0);

	return (checker(++i, n));

}
/**
 * is_prime_number - check if the number is prime
 *
 * @n : the number to be checked
 * Return: returns 1 if the input integer is a prime number
 * , otherwise return 0.
 */

int is_prime_number(int n)
{
	return (checker(2, n));
}

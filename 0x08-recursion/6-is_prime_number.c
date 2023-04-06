#include "main.h"

/**
 * is_prime_number_helper - helper function
 *
 * @n: input number
 * @div: input divisor
 *
 * Return: 1 if input is prime, otherwise
 */
int is_prime_number_helper(int n, int div)
{

	if (div <= 0)
	{
		return (0);
	}

	if (div == 1)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, div - 1));
}


/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise returns 0
 *
 * @n: input number
 *
 * Return: 1 if input is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, n - 1));
}

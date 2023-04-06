#include "main.h"

/**
 * attempt_recurse_sqrt - helper function that loops through
 * possible answers.
 *
 * @n: input number
 * @iter: iterator for helper function
 *
 * Return: calculated square root
 */
int attempt_recurse_sqrt(int n, int iter)
{
	if (iter * iter > n)
	{
		return (-1);
	}

	if (iter * iter == n)
	{
		return (iter);
	}

	return (attempt_recurse_sqrt(n, iter + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 *
 * Return: calculated square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (attempt_recurse_sqrt(n, 0));
}


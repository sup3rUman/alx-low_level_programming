#include "main.h"

/**
 * helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The square root of n.
 */

int helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);

	}
	else
	{
		return (helper(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - alculate the square root.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)

		return (-1);

	return (helper(n, 0));
}

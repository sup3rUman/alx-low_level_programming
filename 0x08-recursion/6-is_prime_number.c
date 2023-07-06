#include "main.h"

/**
 * is_prime_helper - check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
	{
		return (0);
	}

	if (divisor > n / 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
	}
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for primality.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

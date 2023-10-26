#include "main.h"

/**
 * prime_a - Calculation point
 * @b: Input
 * @c: divisor
 * Return: 0  (success)
 */

int prime_a(int b, int c)
{
	if (b <= 1 || (b != c && b % c == 0))
	{
		return (0);
	}
	else if (b  == c)
	{
		return (1);
	}
	return (prime_a(b, c + 1));
}

/**
 * is_prime_number - A function that print a prime number
 * @n: Value
 * Return: 0  (success)
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}

#include "main.h"

/**
 * factorial - A function that returns the facttorial of a given number
 *
 * @n: The integer number
 *
 * Return: 0 (success)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

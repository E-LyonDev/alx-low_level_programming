#include "main.h"

/**
 * sqrt_a - A function that prints a square root
 * @a: Input of n
 * @b: Number to check the square root
 * Return: Square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - A function that prints a square root
 * @n: Input value
 * Return: Natuaral sqare root
 */


int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

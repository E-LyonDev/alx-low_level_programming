#include <stdio.h>

/**
 * swap_int - A function that swaps the value of two integers
 * @a: value to be  swaped with b
 * @b: Value to be swaped with a
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}

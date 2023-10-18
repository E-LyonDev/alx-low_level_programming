#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints the n elements of an array of int
 * @a: Array of integers
 * @n: Number of element of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}

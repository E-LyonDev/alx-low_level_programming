#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	int q;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	q = n % 10;
	if (q > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, q);
	if (q == 0)
		printf("last digit of %d is %d and is 0\n", n, q);
	if (q < 6 && q != 0)
		printf("last  digit of %d is %d and is less than 6 and not 0\n", n, q);

	return (0);
}

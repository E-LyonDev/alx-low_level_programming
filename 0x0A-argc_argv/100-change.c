#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimun number of coins to make change for aam amount of money
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cent > 0)
	{
		 coins++;
		 if ((cent - 25) >= 0)
		 {
			 cent -= 25;
			 continue;
		 }
		 if ((cent - 10) >= 0)
		 {
			 cent -= 10;
			 continue;
		 }
		 if ((cent - 5) >= 0)
		 {
			 cent -= 5;
			 continue;
		 }
		 if ((cent - 2) >= 0)
		 {
			 cent -= 2;
			 continue;
		 }
		 else
		 {
		 cent--;
		 }
	}
	printf("%d\n", coins);
	return (0);
}

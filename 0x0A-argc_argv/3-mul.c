#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}

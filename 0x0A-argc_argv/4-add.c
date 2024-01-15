#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Function that adds up positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *e;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		e = argv[i];

		for (j = 0; j < strlen(e); j++)
		{
			if (e[j] < 48 || e[j] > 57)
			{
				printf("errror\n");
				return (1);
			}
		}
		sum = sum + atoi(e);
	}
	printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

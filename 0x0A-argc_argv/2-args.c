#include <stdio.h>
#include "main.h"

/**
 * main - function that prints all the argument it receive
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

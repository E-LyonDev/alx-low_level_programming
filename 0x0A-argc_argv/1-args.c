#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print the number of argument passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

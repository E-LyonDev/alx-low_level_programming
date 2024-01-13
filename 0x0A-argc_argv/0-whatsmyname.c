#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints its name
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
	{
		printf("%s\n", *argv);
		return (0);
	}

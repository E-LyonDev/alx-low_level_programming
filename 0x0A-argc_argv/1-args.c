#include "stdio.h"
#include <stdlib.h>

/**
 * main - Function that prints the number of argument passed into it
 * argc - argument count
 * argv - argument vector
 *
 * Return always  zero
 */

int main (int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return 0;
}

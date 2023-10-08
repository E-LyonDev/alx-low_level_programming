#include <stdio.h>
/**
 * main - A program that prints the various type of computer it is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int var;
	long int c;
	long long int d;
	float f;
	
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(var));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

#include "main.h"

/**
 * _memset - Entry point
 * @s: Pointer
 * @b: Constant byte
 * @n: Bytes
 * Return: 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n; i++)
		s[i] = b;
	return (s);
}

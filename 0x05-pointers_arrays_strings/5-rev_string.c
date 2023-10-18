#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to be modified
 * Return: void
 */

void rev_string(char *s)
{
	int lnt = 0, idx = 0;
		char tmp;

	while (s[idx++])
		lnt++;
	for (idx = lnt - 1; idx >= lnt / 2; idx--)
	{
		tmp = s[idx];
		s[idx] = s[lnt - idx - 1];
		s[lnt - idx - 1] = tmp;
	}
}

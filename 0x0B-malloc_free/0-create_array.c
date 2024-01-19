#include <stdlib.h>
#include "main.h"

/**
 * *Create_array - function that creates an array of chars
 * @size: size of array
 * @c: Character to fill the array
 * Return: The array filled
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}

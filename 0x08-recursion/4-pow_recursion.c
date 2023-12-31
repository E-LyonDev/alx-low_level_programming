#include "main.h"

/**
 *  _pow_recursion - A function that returns the value of x to the power y
 *  @x: Value to be printed
 *  @y: Power
 *  Return: The valu of the value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

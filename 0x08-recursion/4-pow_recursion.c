#include "holberton.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: The value
* @y: The power
* Return: The value of x raised to the power of y.
*	If y is lower than 0 should return -1.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1 / _pow_recursion(x, -y));
	}
}

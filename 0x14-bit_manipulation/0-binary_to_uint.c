#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

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

/**
*_strlen - return length to a string
*@s: The character to count
* Return: return an integer "i"
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - Function that converts a binary to number.
 * @b: The string to evaluate.
 * Return: The number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len, i, p = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		sum = sum + _pow_recursion(2, p);
		p++;
	}
	return (sum);
}

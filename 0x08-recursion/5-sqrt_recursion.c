#include "holberton.h"

/**
* fun_a - Function that finds the root of the variable num.
* @num:The number to analize.
* @r: The number to find the root
* Return: Always 0.
*/

int fun_a(int num, int r)
{
	if ((r) * (r) == num)
	{
		return (r);
	}

	if (r == num / 2)
	{
		return (-1);
	}

	return (fun_a(num, r + 1));
}

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: The number to analize.
* Return: The value of each root or -1 if it has no root
*/

int _sqrt_recursion(int n)
{
	int r = 1;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (fun_a(n, r));
}

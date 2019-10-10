#include "holberton.h"

/**
* fun_pr - function that finds if it's prime number.
* @a: The value to analize.
* @b: The value that changes to analyze.
* Return: 1 if a is prime, otherwise 0.
*/

int fun_pr(int a, int b)
{
	if (a % b == 0 && a != 2)
	{
		return (0);
	}

	if (b > a / 2)
	{
		return (1);
	}

	return (fun_pr(a, b + 1));
}

/**
* is_prime_number - function that returns 1 is a prime number, otherwise 0.
* @n: The value to analize.
* Return: 0 if n is negative, and 0 if n is 1.
*/

int is_prime_number(int n)
{
	int pri = 2;

	if (n < 0)
	{
		return (0);
	}

	if (n == 1)
	{
		return (0);
	}

	return (fun_pr(n, pri));
}

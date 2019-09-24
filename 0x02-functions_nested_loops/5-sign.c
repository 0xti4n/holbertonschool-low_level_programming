#include "holberton.h"

/**
 *print_sign - print the sign of a number
 *@n: The character to print
 * Return: 1 and print +, 0 and print 0, -1 and print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}


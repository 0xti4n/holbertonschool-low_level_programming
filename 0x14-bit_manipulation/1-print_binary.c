#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary - Function that converts a decimal to binary.
 * @n: The number to evaluate.
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}

	if (n == 1)
	{
		_putchar('1');
	}

	if (n > 1)
	{
		print_binary(n >> 1);

		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

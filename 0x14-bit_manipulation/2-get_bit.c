#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* get_bit - returns the value of a bit.
* @n: The value
* @index: The index.
* Return: The bit.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		if (n & (1 << index))
		{
			return (1);
		}

		else
		{
			return (0);
		}
	}
}

#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* clear_bit - returns the value of a bit.
* @n: The value
* @index: The index.
* Return: 1 if worked or -1 if an error ocurred.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}

	if (n == NULL)
	{
		return (-1);
	}

	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}


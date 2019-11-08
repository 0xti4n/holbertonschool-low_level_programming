#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* set_bit - Set the value of a bit.
* @n: The value
* @index: The index.
* Return: 1 if worked, -1 if an error ocurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	else
	{
		return (*n = *n | (1 << index));
	}
	return (1);
}

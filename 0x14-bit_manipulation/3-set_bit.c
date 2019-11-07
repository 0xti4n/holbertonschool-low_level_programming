#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* get_bit - returns the value of a bit.
* @n: The value
* @index: The index.
* Return: The bit.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    if (n == NULL)
    {
        return (-1);
    }

    else
    {
        if ((1 << index) | *n)
        {
            return (1);
        }

        else
        {
            return (0);
        }
    }
}

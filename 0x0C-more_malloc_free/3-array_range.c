#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* @min: The first value.
* @max: The second value.
*
* Return: The pointer in the new array.
*/

int *array_range(int min, int max)
{
	int *p, t, i;

	if (min > max)
	{
		return (NULL);
	}

	t = max - min + 1;

	p = malloc(sizeof(int) * t);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < t; i++)
	{
		p[i] = min++;
	}
	return (p);
}

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
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; p[i] < (max - min) + 1; i++)
	{
		p[i] = min++;
	}
	return (p);
}
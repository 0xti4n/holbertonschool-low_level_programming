#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Searches for an integer.
* @array: The integer to check.
* @size: The size of the array.
* @cmp: The function pointer.
* Return: 0 if false, something else otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

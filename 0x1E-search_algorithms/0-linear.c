#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: the list
* @size: the size of the array
* @value: the value to search
* Return: The index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

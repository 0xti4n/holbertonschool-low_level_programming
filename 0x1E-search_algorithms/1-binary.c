#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* print_numbers - searches for a value in an array of integers
* @array: the list
* @first: the size of the array
* @last: the value to search
* Return: The index where value is located
*/

void print_numbers(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i < last)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d", array[i]);
		}
	}
	printf("\n");
}

/**
* binary_search - searches for a value in an array of integers
* @array: the list
* @size: the size of the array
* @value: the value to search
* Return: The index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		middle = ((first + last) / 2);
		print_numbers(array, first, last);
		if (array[middle] < value)
			first = middle + 1;

		else if (array[middle] > value)
			last = middle - 1;

		else
			return (middle);
	}
	return (-1);
}

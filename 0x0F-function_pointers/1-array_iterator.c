#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - Given as a parameter on each element of an array.
* @array: the integer to print
* @size: The size of the array.
* @action: Pointer to function.
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

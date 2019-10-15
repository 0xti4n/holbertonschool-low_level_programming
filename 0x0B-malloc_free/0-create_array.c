#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: The size of bytes of the array.
* @c: The character to print.
*
* Return: The pointer.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	ptr[i] = c;

	return (ptr);
}



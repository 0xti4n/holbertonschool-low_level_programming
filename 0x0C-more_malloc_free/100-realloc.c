#include "holberton.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block.
* @ptr: Old size of memory.
* @old_size: The size of reallocate.
* @new_size: New size of memory.
* Return: The new pointer and the new  allocation.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (p);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
	}

	free(ptr);
	return (p);
}

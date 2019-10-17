#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory.
* @b: The zise.
* Return: Nothing.
*/

void *malloc_checked(unsigned int b)
{

	void *a;

	a = malloc(b);

	if (a == NULL || b == 0)
	{
		exit(98);
	}

	return (a);
}

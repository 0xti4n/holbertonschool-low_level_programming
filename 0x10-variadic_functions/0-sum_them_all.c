#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -  sum of all its parameters.
* @n: Number of parameters.
* Return: 0 if n == 0, or the operation sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, unsigned int);
	}

	va_end(list);
	return (sum);
}

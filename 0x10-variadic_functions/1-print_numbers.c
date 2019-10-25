#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers - Function that prints numbers.
* @separator: The character to print between numbers.
* @n: Zise.
* Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
		}
	}

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}

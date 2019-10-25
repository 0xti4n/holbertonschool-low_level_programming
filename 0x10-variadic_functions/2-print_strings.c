#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - Prints string.
* @separator: The character to print between two strings.
* @n: Size.
* Return: Nothing.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);

		if (separator == NULL)
		{
			printf("%s", s);
		}

		if (s == NULL)
		{
			s = "(nil)";
		}

		if (separator != NULL)

		{
			printf("%s", s);

			if (i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(list);
}

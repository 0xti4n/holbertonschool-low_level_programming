#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints anything.
* @format: The format to compare.
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *c;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(list, int));
			break;

			case 'i':
			printf("%i", va_arg(list, int));
			break;

			case 'f':
			printf("%f", va_arg(list, double));
			break;

			case 's':
			c = va_arg(list, char *);
			if (c == NULL)
			{
				c = "(nil)";
			}
			printf("%s", c);
			break;
		}
		if ((format[i + 1] != '\0') && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}

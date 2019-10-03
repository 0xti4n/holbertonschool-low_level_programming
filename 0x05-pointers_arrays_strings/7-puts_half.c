#include "holberton.h"

/**
*puts_half - Print the half of the numbers
*@str: The Number to print
*Return: Nothing
*/

void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i++])
		len++;
	{
		if (len % 2 == 0)
		{
			n = len / 2;
		}
		else
		{
			n = (len + 1) / 2;
		}
		for (i = n; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}




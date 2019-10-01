#include "holberton.h"

/**
*puts2 - print a string.
*@str: The character to print.
* Return: nothing.
*/
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}


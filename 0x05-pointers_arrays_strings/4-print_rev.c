#include "holberton.h"

/**
*print_rev - function to print the sentence in  reverse
*@s: The character to print
* Return: nothing.
*/

void print_rev(char *s)
{
	int i = 0, l;

	while (s[i] != '\0')
		i++;
	
	for (l = i - 1; l >= 0; l--)
	{
		_putchar(*(s + l));
	}
	_putchar('\n');
}

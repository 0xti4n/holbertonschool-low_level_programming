#include "holberton.h"

/**
*_puts - print a string.
*@str: The character to print.
* Return: nothing.
*/

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}

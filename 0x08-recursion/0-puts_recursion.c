#include "holberton.h"

/**
* _puts_recursion - prints a string.
* @s: The pointer to print.
* Return: Nothing.
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar (*s);
	_puts_recursion(s + 1);
	}

	else
		_putchar ('\n');

}

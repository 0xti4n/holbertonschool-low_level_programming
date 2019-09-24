#include "holberton.h"

/**
 *print_last_digit - prints the last digit of a number.
 *@l: The character to print
 * Return: Always l.
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	l *= -1;

	_putchar(l + '0');

	return (l);

}

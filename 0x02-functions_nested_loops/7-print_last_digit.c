#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	l *= -1;

	_putchar(l + '0');

	return (l);

}

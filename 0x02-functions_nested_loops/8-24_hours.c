#include "holberton.h"

/**
 *jack_bauer - prints the clock
 *
 *
 */
void jack_bauer(void)
{
	int h1 = 0, h2 = 0, m1 = 0, m2 = 0, n = 9;

	for (; h1 <= 2 ; h1++)
	{
	if (h1 == 2)
	n = 3;

	else
	n = 9;

	for (; h2 <= n ; h2++)
	{
	for (; m1 <= 5 ; m1++)
	{
	for (; m2 <= 9 ; m2++)
	{
	_putchar(h1 + '0');
	_putchar(h2 + '0');
	_putchar(':');
	_putchar(m1 + '0');
	_putchar(m2 + '0');
	_putchar('\n');
	}
	m2 = 0;
	}
	m1 = 0;
	}
	h2 = 0;
	}
}

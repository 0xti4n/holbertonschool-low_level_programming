#include "holberton.h"

/**
 *times_table - print a table 10x10
 *
 *
 */
void times_table(void)
{
        int row, column, res;
	
	for (row = 0; row <= 9; row++)
	{
	_putchar('0');

	for (column = 1; column <= 9; column++)
	{
	_putchar(',');
	_putchar(' ');

	res = row * column;

	if (res <= 9)
	_putchar(' ');
	else
	_putchar((res / 10) + '0');
	_putchar((res % 10) + '0');
	}
	_putchar('\n');
	}
}

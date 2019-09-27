#include "holberton.h"

/**
*print_square - print square of 2 and 10 with '#'
*@size: The character to print
*/

void print_square(int size)
{
	int l1, l2;

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < size; l2++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

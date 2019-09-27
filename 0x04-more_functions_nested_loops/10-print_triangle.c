#include "holberton.h"

/**
* print_triangle - print a triangle
*
* @size: The charater to print
*/

void print_triangle(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = size - row; col > 0; col--)
			_putchar(' ');

		for (col = 0; col < row; col++)
			_putchar('#');
		_putchar('\n');
	}
}


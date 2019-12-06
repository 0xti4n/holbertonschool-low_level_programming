#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - Print the sum of the two diagonals.
* @a: The array to evaluate.
* @size: Size of the array.
* Return: Nothing.
*/

void print_diagsums(int *a, int size)
{
	int i, row = 0, col = 0, sum = 0, sum1 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (col == size)
		{
			row++;
			col = 0;
		}

		if (col == row)
		{
			sum += a[i];
		}

		if ((row + col) == (size - 1))
		{
			sum1 += a[i];
		}
		col++;
	}
	printf("%d, %d\n", sum, sum1);
}


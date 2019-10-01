#include "holberton.h"

/**
*swap_int-swaps the values of two intengers a and b
*@a: The character to swap
*@b: The second character to swap
* Return: nothing
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

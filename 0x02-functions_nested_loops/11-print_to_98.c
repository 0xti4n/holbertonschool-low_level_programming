#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints number to 98
 *@n: The character to print
 */

void print_to_98(int n)
{
	if (n < 98)
	{
	do {
	if (n != 98)
	printf("%d,", n);
	else
	printf("%d", n);
	n++;
	} while (n <= 98);
	printf("\n");
	}

	else if (n == 98)
	printf("%d\n", n);

	else
	{
	do {
	if (n != 98)
	printf("%d,", n);
	else
	printf("%d", n);
	n--;
	} while (n >= 98);
	printf("\n");
	}

}

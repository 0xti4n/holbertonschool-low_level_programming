#include "holberton.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char a;

	while (c++ <= 9)
	{
	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
	}

}

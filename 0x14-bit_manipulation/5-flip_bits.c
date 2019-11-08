#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
* countbits - returns the value of a numbers to flip.
* @n: The value
* Return: The count.
*/

unsigned int countbits(unsigned int long n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}


/**
* flip_bits - returns the number of bits you would need to flip.
* @n: The firts value
* @m: The second.
* Return: The count.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countbits(n ^ m));
}

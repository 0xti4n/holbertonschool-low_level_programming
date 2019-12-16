#include "holberton.h"

/**
 *_islower - check for lowercase character
 *@c: The character to print
 *
 * Return: 1 if "c" is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}

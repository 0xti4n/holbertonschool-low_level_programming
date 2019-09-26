#include "holberton.h"

/**
*_isdigit - check for digit
*@c: The character to print
*
* Return: 1 if "c" is a digit and 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

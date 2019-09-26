#include "holberton.h"

/**
   *_isupper - check for uppercase character
    *@c: The character to print
     *
  * Return: 1 if "c" is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

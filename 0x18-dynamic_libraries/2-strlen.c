#include "holberton.h"
#include <stdio.h>

/**
*_strlen - return length to a string
*@s: The character to count
* Return: return an integer "i"
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

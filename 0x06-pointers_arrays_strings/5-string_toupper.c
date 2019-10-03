#include "holberton.h"

/**
* string_toupper - change lowercase to uppercase
* @s: string to change
* Return: s
*/

char *string_toupper(char *s)
{
	int i = 0;

	for  (i = 0; s[i] != '\0'; i++)
	{

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	}
	return (s);
}


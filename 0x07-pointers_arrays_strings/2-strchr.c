#include "holberton.h"

/**
* _strchr - locates a character in a string.
* @s: The string in which the character is searched.
* @c: The character that is searched in the string s.
* Return: If c is found: a pointer to the first ocurrence
* If c is not found: NUll
*/

char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (*s != c)
	{
		s++;
		i++;

		if (*s == c)
		{
			return (p + i);
		}
	}
	return ('\0');
}

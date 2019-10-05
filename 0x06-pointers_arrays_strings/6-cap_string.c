#include "holberton.h"

/**
* cap_string - Capitalize all words of a string
* @s: the string to read
* Return: s
*/

char *cap_string(char *s)
{
	int c = 0;

	while (s[c])
	{
		while (!(s[c] >= 'a' && s[c] <= 'z'))
			c++;

		if (s[c - 1] == ',' ||
				s[c - 1] == ' ' ||
				s[c - 1] == '\t' ||
				s[c - 1] == '\n' ||
				s[c - 1] == ';' ||
				s[c - 1] == '.' ||
				s[c - 1] == '!' ||
				s[c - 1] == '?' ||
				s[c - 1] == '"' ||
				s[c - 1] == '(' ||
				s[c - 1] == ')' ||
				s[c - 1] == '{' ||
				s[c - 1] == '}')
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}

#include "holberton.h"

/**
* rot13 - encodes a string using rot 13
* @s: The string to encode
* Return: (s) string
*/

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] += 13;
		}

		else
			while ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
			}
	}
	return (s);
}

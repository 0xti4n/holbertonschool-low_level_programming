#include "holberton.h"

/**
* leet - Encodes a string into 1337.
* @s: The string to encode.
* Return: (s) = string
*/

char *leet(char *s)
{
	int a = 0, b, c;

	char l[10] = {'o', 'O', 'l', 'L', 'e', 'E', 'a', 'A', 't', 'T'};
	char n[10] = {'0', '0', '1', '1', '3', '3', '4', '4', '7', '7'};

	while (s[a])
	{
		for (b = 0, c = 0; b <= 10 && c <= 10; b++, c++)
		{
			if ((s[a] == l[b] && n[c]) || (s[a] - 32 == l[b] && n[c]))
				s[a] = n[c];
		}
		a++;
	}
	return (s);
}

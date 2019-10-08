#include "holberton.h"

/*
* _strspn - Gets the length of a prefix substring.
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in s.
* Return: Unsigned int (i) numbers of bytes.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (*(s + i))
	{
		j = 0;

		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}

		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: A valid string.
* @needle: String pattern that search inside haystack.
* Return: The equal pattern.
*/

char *_strstr(char *haystack, char *needle)
{
	char *begin = haystack;
	char *check;
	char *pattern;

	while (*begin)
	{
		pattern = needle;
		check = begin;

		while (*check && *pattern && *check == *pattern)
		{
			check++;
			pattern++;

			if (!*(pattern) || !*(check))
			{
				return (begin);
			}
		}
		begin++;
	}
	return ('\0');
}

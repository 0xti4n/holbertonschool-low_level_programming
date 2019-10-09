#include "holberton.h"

/**
* _strstr - locates a substring.
* @haystack: A valid string.
* @needle: String pattern that search inside haystack.
* Return: The equal pattern.
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *Begin = haystack;
		char *pattern = needle;

		while (*haystack && *needle && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*pattern)
		{
			return (Begin);
		}
		haystack++;
	}
	return ('\0');
}

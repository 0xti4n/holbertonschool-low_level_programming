#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: The first string to print.
* @s2: The second string to print.
* Return: The sum of two strings.
*/

char *str_concat(char *s1, char *s2)
{
	int a, b;
	int i, j = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] || s2[a]; a++)
	{
		b++;
	}

	p = malloc(sizeof(char) * b);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		p[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		p[j++] = s2[i];
	}
	return (p);
}

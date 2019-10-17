#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: The first string to print.
* @s2: The second string to print.
* @n: size of the size limit of s2
* Return: The new string concatenate.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, c = n;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		c++;
	}

	a = malloc(sizeof(char) * c + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	c = 0;
	for (i = 0; s1[i]; i++)
	{
		a[c++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		a[c++] = s2[i];
	}
	a[c] = '\0';
	return (a);
}

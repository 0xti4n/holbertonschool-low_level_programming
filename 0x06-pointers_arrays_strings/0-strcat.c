#include "holberton.h"

/**
* _strcat - Concatenate two strings
* @dest: array 1
* @src: array 2
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;

	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}

	return (dest);
}

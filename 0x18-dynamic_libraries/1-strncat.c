#include "holberton.h"

/**
* _strncat - concatenates two strings
* @dest: string 1
* @src: string 2
* @n: bytes
* Return: Dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}

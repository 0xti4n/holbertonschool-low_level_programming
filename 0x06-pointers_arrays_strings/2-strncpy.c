#include "holberton.h"

/**
* _strncpy - copies a string
* @dest: This is the pointer to the destination
* @src: This is the string to be copied.
* @n: The number of characters to be copied from source
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

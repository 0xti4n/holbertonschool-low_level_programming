#include "holberton.h"

/**
* _strcpy - copies the string pointed to by src
* @dest: copy the string
* @src: the string to copy
* Return: value to pointer dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

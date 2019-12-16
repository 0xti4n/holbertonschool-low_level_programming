#include "holberton.h"

/**
* _memcpy - copies memory area.
* @dest: This the destination array where the content is to be copied
* @src: This is pointer to the source of data to be copied
* @n: This is the number of bytes to be copied.
* Return: Dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

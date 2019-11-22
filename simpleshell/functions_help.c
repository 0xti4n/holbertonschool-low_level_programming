#include "shell.h"

/**
*_strlen - return length to a string
*@s: The character to count
* Return: return an integer "i"
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: the diference between s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}

	else
	{
		return (*s1 - *s2);
	}
}

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

/**
* _realloc - reallocates a memory block.
* @ptr: Old size of memory.
* @old_size: The size of reallocate.
* @new_size: New size of memory.
* Return: The new pointer and the new  allocation.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (p);
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
	}

	free(ptr);
	return (p);
}

/**
* _getenv - Find the list of environment.
* @name: The name to search.
* @env: The environment.
* Return: The list of enviroment.
*/

char *_getenv(char *name, char **env)
{
    int i = 0;
    char *token;

    while(env[i])
    {
         token = strtok(env[i], "=" );

        if(_strcmp(token, name) == 0)
        {
            token = strtok(NULL, "=" );
            return (token);
        }
        i++;
    }
    if (name == NULL)
        perror("NOT FOUND");
    return(NULL);
}

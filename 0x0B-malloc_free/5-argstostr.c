#include "holberton.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: The number of arguments.
* @av: The array that store the arguments.
* Return: A pointer to the new string.
*/

char *argstostr(int ac, char **av)
{
	int a, b, j, tam;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			tam++;
		}
		tam++;
	}

	p = malloc(sizeof(char) * tam + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	j = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[j++] = av[a][b];
		}
		p[j++] = '\n';
	}
	p[tam] = '\0';
	return (p);
}

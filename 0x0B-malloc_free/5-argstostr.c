#include "holberton.h"
#include <stdlib.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/

char *argstostr(int ac, char **av)
{
	int a, b, c;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			c++;
		}
	}
	c++;
	
	p = malloc(c * sizeof(char));
	
	if (p == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			int j;
			p[j] = av[a][b];
			j++;
		}
	}
	return (p);
}

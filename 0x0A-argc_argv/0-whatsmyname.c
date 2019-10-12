#include "holberton.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed into it.
* @argc: Numbers of arguments.
* @argv: Holds the arguments.
* Return: 0 to succes.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}

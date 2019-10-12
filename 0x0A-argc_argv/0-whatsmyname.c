#include <stdio.h>

/**
* main - Prints the number of arguments passed into it.
* @argc: Numbers of arguments.
* @argv: Holds the arguments.
* Return: 0 to succes.
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

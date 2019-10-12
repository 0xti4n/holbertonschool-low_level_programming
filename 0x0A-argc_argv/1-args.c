#include <stdio.h>

/**
  * main - Prints the number of arguments passed into it..
  * @argc: Numbers of arguments.
  * @argv: Holds the arguments.
  * Return: 0 to succes.
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

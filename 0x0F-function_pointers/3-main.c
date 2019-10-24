#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all arguments it receives.
* @argc: Numbers of arguments.
* @argv: Holds the arguments.
* Return: 0 to succes.
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int calc;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
			&& *argv[2] != '/' && *argv[2] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (num1 || num2) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = (get_op_func(argv[2])(num1, num2));
	printf("%i\n", calc);
	return (0);
}

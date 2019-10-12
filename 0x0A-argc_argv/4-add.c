#include <stdio.h>
#include <stdlib.h>

/**
* main - Sum two numbers.
* @argc: Numbers of arguments.
* @argv: Holds the arguments.
* Return: 0 to succes.
*/
int main(int argc, char *argv[])
{
	int sum = 0, b, i;

	for (b = 1; b < argc; b++)
	{
		for (i = 0; argv[b][i]; i++)
		{
			if (argv[b][i] < '0' || argv[b][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}


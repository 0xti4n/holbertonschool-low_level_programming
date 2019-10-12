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
	int sum = 0, i;

	for (i = 1; argv[i]; i++)
	{
		sum += atoi(argv[i]);

		if (*argv[i] >= 97 && *argv[i] <= 122)
		{
			printf("Error\n");
			return (1);
		}

		if (argc > *argv[i])
		{
			printf("\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}


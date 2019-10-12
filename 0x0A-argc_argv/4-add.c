#include <stdio.h>
#include <stdlib.h>

/**
* main - Sum two numbers.
* @argc: Numbers of arguments.
* @argv: Holds the arguments.
* Return: 0 to succes.
*/
int main(__attribute__((unused)) int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; argv[i]; i++)
	{
		sum += atoi(argv[i]);

		if ((*argv[i] >= 32 && *argv[i] <= 47) ||
			(*argv[i] >= 58 && *argv[i] <= 64) ||
			(*argv[i] >= 65 && *argv[i] <= 126))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}


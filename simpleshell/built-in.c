#include "shell.h"

/**
 *
 *
 */
void built_in_command(char **args)
{
	int n = 1, i, switcharg = 0;
	char *List[n];

	List[0] = "exit";

	for (i = 0; i < n; i++)
	{
		if (_strcmp(args[0], List[i]) == 0)
		{
			switcharg = i + 1;
			break;
		}
	}
	switch (switcharg)
	{
		case 1:
		exit(0);
		default:
		break;
	}
}

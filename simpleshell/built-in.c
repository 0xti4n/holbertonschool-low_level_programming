#include "shell.h"

/**
 * 
 * 
 */
int built_in_command(char **args) 
{ 
	int n = 2, i, switcharg = 0; 
	char *List[n]; 
	
	List[0] = "exit"; 
	List[1] = "cd"; 
	
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
		case 2: 
		if (args[1] == NULL) 
		{
			perror("expected argument to \"cd\"\n");
		} 
		else 
		{
			if (chdir(args[1]) != 0)
			{
				perror("Error");
			}
		}
		return 1;
		default: 
		break; 
	} 
	return 0; 
} 

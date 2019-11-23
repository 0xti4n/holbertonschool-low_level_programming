#include "shell.h"

/**
 * 
 */

void list_creator(char **paths, list_t **head)
{
	int i = 0;

	while(paths[i])
	{
		add_node(head, paths[i]);
		i++;
	}
}

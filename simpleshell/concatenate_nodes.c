#include "shell.h"

/**
 * 
 */

char *concatenate_list(list_t **head, char *cmd)
{
	list_t *temp = *head;
	char *newpath, *cmd2;

	if (cmd != NULL)
	{
		if (*cmd != '/')
		{
			while (temp)
			{
				cmd2 = str_concat("/", cmd);
				newpath = str_concat(temp->str, cmd2);
				if (!access(newpath, X_OK))
				{
					free(cmd2);
					return (newpath);
				}
				temp = temp->next;
			}
		}
	}
	return (cmd);
}

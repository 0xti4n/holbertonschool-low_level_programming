#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - Frees a list.
* @head: The argument.
* Return: Nothing.
*/

void free_list(list_t *head)
{
	list_t *tmp = head, *tmp1;

	while (tmp != NULL)
	{
		tmp1 = tmp->next;
		free(tmp);
		tmp = tmp1;
	}
}

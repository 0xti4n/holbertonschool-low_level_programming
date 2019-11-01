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
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

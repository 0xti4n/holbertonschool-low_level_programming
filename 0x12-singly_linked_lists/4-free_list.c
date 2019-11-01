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
	list_t *p = head;
	list_t *temp = NULL;

	while (p != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}
	free(temp);
}

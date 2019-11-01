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

	while (p)
	{
		free(head->str);
		free(head);
		p = p->next;
		head = p;
	}
}

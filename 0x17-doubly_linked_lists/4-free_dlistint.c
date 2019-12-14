#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - function that free a list.
 *@head: The list to free.
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(&head->n);
		head = head->next;
	}
	free(head);
}

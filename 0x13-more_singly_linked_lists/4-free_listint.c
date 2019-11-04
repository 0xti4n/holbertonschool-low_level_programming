#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - Free a list.
 * @head: The arguments.
 * Return: The new node.
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		free(head);
		temp = temp->next;
		head = temp;
	}
}

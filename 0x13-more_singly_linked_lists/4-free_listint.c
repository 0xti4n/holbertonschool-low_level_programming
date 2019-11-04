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
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

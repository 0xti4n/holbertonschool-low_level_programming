#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Delete head node.
 * @head: The arguments.
 * Return: The value of the delete node.
 */

int pop_listint(listint_t **head)
{
	listint_t *p, *p1;
	int i;

	if (*head == NULL)
	{
		return (0);
	}

	p = *head;
	p1 = (*head)->next;
	i = (*head)->n;
	*head = p1;

	free(p);
	return (i);
}

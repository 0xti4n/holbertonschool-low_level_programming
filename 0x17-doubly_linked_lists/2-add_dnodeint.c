#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - Adds a new node at the beginning of a list.
 *@head: The node.
 *@n: Number to add to node.
 * Return: new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}

	else
	{
		new->n = n;
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
}

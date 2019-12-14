#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
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
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
}

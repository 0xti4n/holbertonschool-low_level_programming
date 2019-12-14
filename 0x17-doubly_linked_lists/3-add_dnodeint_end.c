#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if(*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while(current->next != NULL)
			current = current->next;
		current->next = new;
		new->n = n;
		new->prev = current;
		new->next = NULL;
	}
	return (new);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end- adds a new node at the end of a list.
 *@head: The node to create
 *@n: number to add to node.
 * Return: new node.
 */

dlistint_t *add_node_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->n = n;
		new->prev = current;
		new->next = NULL;
	}
	return (new);
}

/**
 *len_node - returns the number of elements in a linked list.
 *@h: The list to count.
 * Return: The count.
 */

unsigned int len_node(const dlistint_t *h)
{
	unsigned int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}


/**
 *insert_dnodeint_at_index - inserts a new node at a given position..
 *@h: The list.
 *@idx: The index to add.
 *@n: The data to add.
 * Return: new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	tmp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len_node(*h))
		return (add_node_end(h, n));

	else
	{
		while (tmp != NULL)
		{
			if (i == idx)
			{
				new->n = n;
				new->next = tmp;
				new->prev = tmp->prev;
				tmp->prev->next = new;
				tmp->prev = new;
				return (new);
			}
			tmp = tmp->next;
			i++;
		}
		return (NULL);
	}
}

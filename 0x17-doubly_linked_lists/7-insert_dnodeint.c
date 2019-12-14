#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
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

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
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
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_node(dlistint_t **head, const int n)
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

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp = *h;
    dlistint_t *new;
    unsigned int i = 0;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return(NULL);
    if (idx == 0)
      return(add_node(h, n));
    if (idx == len_node(*h))
        return (add_node_end(h, n));

    if (h != NULL)
    {
        while(tmp != NULL)
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
    return (NULL);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: The arguments.
 * @idx: The specific space.
 * @n: The Data.
 * Return: The new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentnode = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	newnode->n = n;

	if (head == NULL)
	{
		return (newnode);
	}

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (idx - 1 > 0)
	{
		currentnode = currentnode->next;
		idx--;
	}

	newnode->next = currentnode->next;
	currentnode->next = newnode;
	return (*head);
}

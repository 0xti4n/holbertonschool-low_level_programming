#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end- adds a new node at the end of a list.
 * @head: The arguments.
 * @n: The data to add
 * Return: The new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp = *head;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}
	return (end_node);
}

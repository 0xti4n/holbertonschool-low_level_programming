#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Inserts a new node at a given position.
 * @head: The arguments.
 * @index: The position of the node to delete.
 * Return: 1 if it's succes or -1 if it's failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp2 = (*head)->next;
	if (index == 0)
	{
		*head = temp2;
		free(temp);
		return (1);
	}

	else
	{
		while (i < index - 1)
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
			temp2 = temp2->next;
			i++;
		}
	}

	if (temp2->next == NULL)
	{
		temp->next = NULL;
		free(temp2);
		return (1);
	}
	else
	{
		temp->next = temp2->next;
		free(temp2);
		return (1);
	}
	return (-1);
}

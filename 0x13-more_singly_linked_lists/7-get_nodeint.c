#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - Return nth node of a list.
 * @head: The arguments.
 * @index: The nodo to evaluate.
 * Return: The value of the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (temp)
	{
		if (c == index)
		{
			return (temp);
		}
		c++;
		temp = temp->next;
	}
	return (0);
}

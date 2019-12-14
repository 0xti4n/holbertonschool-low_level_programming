#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a list.
 *@head: The list.
 *@index: The index to find.
 * Return: The nth node, or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			if (i == index)
			{
				return (temp);
			}
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}

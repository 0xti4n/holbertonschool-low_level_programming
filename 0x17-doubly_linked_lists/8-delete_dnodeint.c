#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a list.
*@head: The list.
*@index: The index to find.
* Return: The nth node, or NULL.
*/

dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
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


/**
*len - returns the number of elements in a linked list.
*@h: The list to count.
* Return: The count.
*/

unsigned int len(const dlistint_t *h)
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
*delete_dnodeint_at_index - Delete node.
*@head: The nodes.
*@index: NUmber to search.
* Return: 1 succes or -1 if not.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0 && (*head)->next)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	temp = get_nodeint_at_index(*head, index);
	if (temp == NULL)
		return (-1);
	if (index == len(*head) - 1)
	{
		temp = temp->prev;
		free(temp->next);
		temp->next = NULL;
		return (1);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}

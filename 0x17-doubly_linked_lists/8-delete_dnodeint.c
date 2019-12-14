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
	dlistint_t *tmp;
	unsigned int len1;

	len1 = len(*head);
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0 && (*head)->next != NULL)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == (len1 - 1))
	{
		tmp = get_nodeint_at_index(*head, index);
		if (tmp == NULL)
			return (-1);
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		tmp = get_nodeint_at_index(*head, index);
		if (tmp == NULL)
			return (-1);
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
}

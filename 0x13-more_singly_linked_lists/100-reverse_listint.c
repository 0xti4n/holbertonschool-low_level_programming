#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* reverse_listint - Reverse a node list.
* @head: The arguments.
* Return: The adress of the new head.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *cur;

	if (*head != NULL)
	{
		prev = *head;
		cur = (*head)->next;
		*head = (*head)->next;

		prev->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			cur->next = prev;

			prev = cur;
			cur = *head;
		}
		*head = prev;
	}
	return (*head);
}

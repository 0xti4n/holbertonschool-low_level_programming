#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint - Add new node at the beginning of a list.
* @head: The argument.
* @n: The data.
* Return: The new node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

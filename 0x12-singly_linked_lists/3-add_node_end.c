#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - Add new node at the end of a list.
* @head: The argument.
* @str: The names to count.
* Return: The end node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *end_node, *temp;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = end_node;
	}

	while (str[i] != '\0')
	{
		i++;
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	end_node->str = strdup(str);
	end_node->len = i;
	temp->next = end_node;

	end_node->next = NULL;
	return (end_node);
}

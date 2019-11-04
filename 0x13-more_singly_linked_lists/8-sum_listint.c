#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* sum_listint - Return the sum of all node of a list.
* @head: The arguments.
* Return: The sum of the node.
*/

int sum_listint(listint_t *head)
{
	int res = 0;

	if (head)
	{
		while (head)
		{
			res = res + head->n;
			head = head->next;
		}
		return (res);
	}

	else
	{
		return (0);
	}
}

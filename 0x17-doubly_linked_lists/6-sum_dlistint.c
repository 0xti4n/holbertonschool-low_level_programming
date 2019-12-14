#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint -  returns the sum of all the data (n) of a list.
 *@head: The list.
 * Return: The sum, or 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head != NULL)
	{
		while (tmp != NULL)
		{
			sum = sum + tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}

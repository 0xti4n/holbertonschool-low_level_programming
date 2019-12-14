#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *print_dlistint - prints all the elements of a list.
 *@h: The list to print
 * Return: The Numbers of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}

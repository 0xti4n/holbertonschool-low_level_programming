#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - Prints all the elements of a list.
* @h: The list to print.
* Return: The numbers of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}

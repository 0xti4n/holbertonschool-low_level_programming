#include "lists.h"
#include <stdio.h>

/**
* list_len - Function returns the number of elements in a linked list.
* @h: The argument.
* Return: The numbers of nodes.
*/

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

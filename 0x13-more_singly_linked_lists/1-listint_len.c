#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* listint_len - Returns the numbers of elements in  a list.
* @h: The list to count.
* Return: The numbers of nodes.
*/

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}

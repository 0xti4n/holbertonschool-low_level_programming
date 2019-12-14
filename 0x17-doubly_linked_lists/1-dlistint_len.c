#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked list.
 *@h: The list to count.
 * Return: The count.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}

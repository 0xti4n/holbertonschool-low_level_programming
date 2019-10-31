#include "lists.h"
#include <stdio.h>

/**
* print_list - Function that prints all the elements of a list.
* @h: The argument.
* Return: The numbers of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		c++;
		h = h->next;
	}
	return (c);
}

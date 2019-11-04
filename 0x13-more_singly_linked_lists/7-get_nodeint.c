#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - Delete head node.
 * @head: The arguments.
 * Return: The value of the delete node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *temp = head;
    unsigned int c = 0;

    if (head != NULL)
    {
        while (temp)
        {
            if (c == index)
            {
                return (temp);
            }
            temp = temp->next;
            c++;
        }
        else
        {
            return (NULL);
        }
}

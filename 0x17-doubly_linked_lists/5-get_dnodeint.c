#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *temp = head;
    unsigned int i = 0;

    if (head != NULL)
    {
        while(temp != NULL)
        {
            if (i == index)
            {
                return (temp);
            }
            temp = temp->next;
            i++;
        }
    }
    return (NULL);
}

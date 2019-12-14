#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
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

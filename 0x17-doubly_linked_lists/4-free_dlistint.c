#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

void free_dlistint(dlistint_t *head)
{
    /* dlistint_t *temp = head; */

    while(head->next != NULL)
    {
        head = head->next;
        free(head->prev);
    }
    free(head);
}

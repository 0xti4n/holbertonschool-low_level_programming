#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t  *new;

    if (size < 1)
        return NULL;

    new = malloc(sizeof(hash_table_t));
    if (new == NULL)
        return NULL;

    new->array = malloc(8 * size);
    if(new->array == NULL)
        return NULL;

    memset(new->array, 0, size * sizeof(hash_node_t *));

    return new;
}
#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table.
 * @size: the size of the array
 * Return: A array.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *new;

	if (size < 1)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = calloc(size, sizeof(char *));
	if (new->array == NULL)
		return (NULL);

	new->size = size;

	return (new);
}

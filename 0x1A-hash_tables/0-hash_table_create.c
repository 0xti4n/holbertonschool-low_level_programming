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

	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t));
	if (new->array == NULL)
		return (NULL);

	memset(new->array, '\0', size * sizeof(hash_node_t *));

	return (new);
}

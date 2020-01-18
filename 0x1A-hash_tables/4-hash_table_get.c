#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: The hash table
* @key: The key to find
* Return: The value.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);

	while (ht->array[idx])
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
			return (ht->array[idx]->value);
		else
			return (NULL);
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}

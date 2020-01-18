#include "hash_tables.h"

/**
 * hash_table_set - check the code for Holberton School students.
 * @ht: array
 * @key: the key
 * @value: the value
 * Return: 1 if success 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head = NULL;

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[idx] == 0)
	{
		new_node->next = head;
		ht->array[idx] = new_node;
		return (1);
	}

	if (ht->array[idx] != 0)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		new_node->next = head;
		ht->array[idx] = new_node;
		return (1);
	}
}

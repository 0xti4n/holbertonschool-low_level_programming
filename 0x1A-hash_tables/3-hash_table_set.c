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

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
		return (0);

	head->key = strdup(key);
	head->value = strdup(value);

	if (ht->array[idx] == 0)
	{
		head->next = ht->array[idx];
		ht->array[idx] = head;
		return (1);
	}

	if (ht->array[idx] != 0)
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			free(ht->array[idx]->value);
			free(head->key);
			free(head->value);
			free(head);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		head->next = ht->array[idx];
		ht->array[idx] = head;
		return (1);
	}
	return (0);
}

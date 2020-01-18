#include "hash_tables.h"

/**
* add_node - Add new node at the beginning of a list.
* @head: The argument.
* @key: The key.
* @value: the value
* Return: The New node.
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

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
	hash_node_t *tmp;

	if (ht == NULL)
		return (0);
	if (key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] == 0)
	{
		ht->array[idx] = add_node(&head, key, value);
		return (1);
	}

	if (ht->array[idx] != 0)
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		ht->array[idx] = add_node(&head, key, value);
		return (1);
	}
}

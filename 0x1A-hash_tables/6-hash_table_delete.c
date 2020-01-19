#include "hash_tables.h"

/**
* hash_table_delete - Function that deletes a hash table.
* @ht: the hash to delete.
* Return: nothing.
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				while (ht->array[i] != NULL)
				{
					tmp = ht->array[i]->next;
					free(ht->array[i]->key);
					free(ht->array[i]->value);
					free(ht->array[i]);
					ht->array[i] = tmp;
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}

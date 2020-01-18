#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table to print.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i = 0;
	int flag = 0;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (i > 0 && flag == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
				{
					flag = 0;
					printf(", ");
					continue;
				}
				flag = 1;
			}
			i++;
		}
		printf("}\n");
	}
}

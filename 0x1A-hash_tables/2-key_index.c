#include "hash_tables.h"

/**
* key_index - function hashing.
* @key: the key
* @size: thr size
* Return: the hash.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int id = 0;

	id = hash_djb2(key);
	return (id % size);
}

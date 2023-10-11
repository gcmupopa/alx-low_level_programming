#include "hash_tables.h"

/**
 * hash_table_get- function that gets a value associated with a key from the hash
 table
 * @key: is the key
 * @ht: hash table to look into
 * Return: a value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cnt;
	if (strcmp(key, "") == 0 || ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	cnt = ht->array[index]; while (cnt != NULL)
	{
		if (strcmp(cnt->key, key) == 0)
		{
			return (cnt->value);
		}
	}
	return (NULL);
}

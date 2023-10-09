#include "HASH_TABLES.H"

/**
 * hash_table_delete- function that deletes the hash table
 * @ht: hash table to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i; hash_node_t *cnt, *tee;
	if (ht == NULL)
	{
		return;
	}
	
	for (i = 0; i < ht->size; i++)
	{
		cnt = ht->array[i];
		if (cnt != NULL)
		{
			free(cnt->key);
			free(cnt->value);
			free(cnt);
		}
		free(ht->array);
		free(ht);
	}
}


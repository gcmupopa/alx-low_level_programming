#include "hash_tables.h"

/**
 * hash_table_delete- function that deletes the hash table
 * @ht: hash table to delete
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *cnt, *tee;
	if (ht == NULL)
	{
		return;
	}
	
	for (i = 0; i < ht->size; i++)
	{
		cnt = ht->array[i];
		while (cnt != NULL)
		{
			tee = cnt;
			cnt = cnt->next;
			free(tee->key);
			free(tee->value);
			free(tee);
		}
		free(ht->array);
		free(ht);
	}
}


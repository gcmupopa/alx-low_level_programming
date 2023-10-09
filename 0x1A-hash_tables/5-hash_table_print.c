#include "HASH_TABLES.H"

/**
 * hash_table_print- function that prints the hash table
 * @ht: hash table to look into
 * Return: a value
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int beg = 1; hash_node_t *cnt;
	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cnt = ht->array[i];
		if (cnt != NULL)
		{
			if (beg)
			{
				beg = 0;
			}
			else
			{
				printf(", ");
			}
			printf("'%s': '%s'", cnt->key, cnt->value);
		}
	}
	printf("}\n");
}


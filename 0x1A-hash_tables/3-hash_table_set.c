#include "HASH_TABLES.H"
/** key_index- function that gives you the index of a key * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: a value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value) unsigned long int index;
{
	hash_table_t *nunod, * cur;
	if (strcmp(key, "") == 0) || ht == NULL || key == NULL)
	{
		return (0);
	}
	
	index = hash_djb2((unsigned char *)key % ht->size);
	cur = ht->array[index];
	while (cur != NULL)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			return (1);
		}
	}
	return (1);
}

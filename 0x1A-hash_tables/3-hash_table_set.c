#include "hash_tables.h"

/**
 * create_node()- creates nunod
 * @key: parameter
 * @value: parameter
 * Return: a pointer to the newly created node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *nu = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (nu == NULL)
	{
		return (NULL);
	}
	nu->key = strdup(key);
	nu->value = strdup(value);
	nu->next = NULL;
	return (nu);
}

/** 
 * key_index- function that gives you the index of a key * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: a value
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *nunod;
	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	nunod = create_node(key, value);
	if (nunod == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = nunod;
	}
	else
	{
		nunod->next = ht->array[index];
		ht->array[index] = nunod;
	}
	return (1);
}

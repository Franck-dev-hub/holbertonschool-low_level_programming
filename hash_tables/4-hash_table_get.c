#include "hash_tables.h"

/**
  * hash_table_get - Get a value associate to a key.
  * @ht: Hash table.
  * @key: Key to search.
  *
  * Return: Value associate with the key.
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

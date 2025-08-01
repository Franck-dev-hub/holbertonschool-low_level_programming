#include "hash_tables.h"

/**
  * hash_table_create - Create an hash table.
  * @size: Size of the hash table.
  *
  * Return: Pointer to the newly created hash table.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Set table size */
	table->size = size;

	/* Init array of hash node */
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}


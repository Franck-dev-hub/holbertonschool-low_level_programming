#include "hash_tables.h"

/**
 * hash_table_print - Print value key pairs.
 * @ht: Hash table.
 *
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int printed = 0;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (printed)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}

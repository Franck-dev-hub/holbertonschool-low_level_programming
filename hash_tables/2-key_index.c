#include "hash_tables.h"

/**
 * key_index - Get the index of a key.
 * @key: Key value.
 * @size: Size of the hash table.
 *
 * Return: Index of key/value pair.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

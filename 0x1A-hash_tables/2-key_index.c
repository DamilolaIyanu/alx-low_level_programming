#include "hash_tables.h"

/**
 *key_index - returns the indext of the given key
 *@key: the specified key whose index is returned
 *@size: the size of the array of the hash table
 *Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

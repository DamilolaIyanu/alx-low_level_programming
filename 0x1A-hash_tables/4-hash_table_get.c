#include "hash_tables.h"

/**
 *hash_table_get - gets the value associated with a key
 *@ht: pointer to the table
 *@key: pointer to the key
 *Return: returns NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

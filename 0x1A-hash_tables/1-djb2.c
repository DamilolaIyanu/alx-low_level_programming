#include "hash_tables.h"
/**
 *hash_djb2 - the djb2 algorithm
 *@str: the pointer to the string
 *Return: the value of hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return(hash);
}

#include "main.h"

/**
 *_memcpy - Copies the memorof source to destination
 *
 *@dest: The memory destination
 *
 *@src: The source memory
 *
 *@n: The number of times the memory iems are copied
 *
 *Return: Returns the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

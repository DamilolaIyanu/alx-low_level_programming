#include "main.h"

/**
 *_memset - function fills memory with a constant byte.
 *@s: The memory to be filled.
 *@b: the constant to be copied
 *@n: the number of times to copy b
 *Return: Returns the filled memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
 *_strpbrk - Searches for a set bof byte in a string
 *@s: The string to be searched
 *@accept: The string we are serching for
 *Return: Returns the value of s or the null byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

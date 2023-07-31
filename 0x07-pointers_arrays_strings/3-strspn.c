#include "main.h"

/**
 *_strspn - claculates the length of a prefix substring
 *@s: the string to be searched
 *@accept: prefix to be measured
 *Return: Returns the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

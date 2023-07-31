#include "main.h"

/**
 *_strchr - Function locates a character in a string
 *
 *@s: The string to be searched
 *
 *@c: The character we are searching for
 *
 *Return: Returns the null byte
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

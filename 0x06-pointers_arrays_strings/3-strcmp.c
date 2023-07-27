#include "main.h"

/**
 *_strcmp - function to compare two strings
 *
 *@s1: stores the first string
 *
 *@s2: stores the second string
 *
 *Return: Returns the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int none = 0;

	while (*s1 != '\0' && *s2 != '\0')
	if (*s1 != *s2)
	{
		return (*s1 - *s2);

	}
	else
	{
		return (none);
	}
	return (0);
}

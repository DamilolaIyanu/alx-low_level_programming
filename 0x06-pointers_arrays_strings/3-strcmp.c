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
	int i;

	for (i = 0; s1[i] != '\0' && none == 0; i++)
	{
		none = s1[i] - s2[i];

	}
	return (none);
}

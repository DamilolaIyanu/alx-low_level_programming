#include "main.h"

/**
 *_strcpy - The pointer copies the string from one to another
 *
 *@dest: stores a string
 *
 *@src: stores a string
 *
 *Return: Returns the strings in dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

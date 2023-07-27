#include "main.h"

/**
 *_strncpy - copies the n byte of src string to dest string
 *
 *@dest: it is the destination string
 *@src: It is the string we are copying
 *@n: it holsds the item in src
 *
 *Return: Returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (i >= n)
	{
		dest[destlen - 1] = '\0';
	}
	else
	{
		dest[i] = '\0';
	}

	return (dest);
}

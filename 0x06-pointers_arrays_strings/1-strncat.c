#include "main.h"

/**
 *_strncat - funtion to append n bytes of source to destination
 *@dest: the string destination
 *@src: the source string
 *@n: the number of bytes of source string
 *Return: Return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}

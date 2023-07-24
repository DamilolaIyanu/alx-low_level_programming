#include "main.h"

/**
 *_strlen - Function finds the length of str
 *
 *@s: the pointer
 *
 *Return: Return the value of a
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

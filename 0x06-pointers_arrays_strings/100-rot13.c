#include "main.h"

/**
 *rot13 - encodes a string using rotation by 13
 *
 *@str: it hold the items to be encoded
 *
 *Return: Returns the encoded strings
 */

char *rot13(char *str)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}

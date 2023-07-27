#include "main.h"

/**
 *string_toupper - function changes string lower case to upper case
 *
 *@str: stores the string to be converted
 *
 *Return: Return the converted string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

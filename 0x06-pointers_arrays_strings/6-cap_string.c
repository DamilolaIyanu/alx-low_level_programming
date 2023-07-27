#include "main.h"

/**
 *cap_string - Function to change the first letter of all
 *cap_string -words in a string to upper case
 *@str: it holds the string to be converted
 *Return: Return the converted string
 */

char *cap_string(char *str)
{
	int i, j;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
		}

	}
	}
	return (str);


}

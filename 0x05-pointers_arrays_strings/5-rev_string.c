#include "main.h"

/**
 *rev_string - reverses strings
 *
 *@s: stores string we want to reverse
 *
 *Return: Returns nothing
 */

void rev_string(char *s)
{
	int length, i;

	char a;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		a = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = a;
	}
}

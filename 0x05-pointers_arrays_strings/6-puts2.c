#include "main.h"

/**
 *puts2 - Prints every other character of a string
 *
 *@str: Stores the string whose character is to be printed
 *
 *
 *Return: Returns nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

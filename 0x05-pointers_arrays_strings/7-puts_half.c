#include "main.h"

/**
 *puts_half - prints the last half of a string.
 *
 *@str: stores the string whose half we want to print.
 *
 *Return: Returns nothing.
 */

void puts_half(char *str)
{
	int half, i;

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	half = (length - 1) / 2;

	for (i = (half + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

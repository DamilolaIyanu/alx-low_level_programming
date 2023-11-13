#include "main.h"

/**
 *_puts - print the full string
 *
 *@str: contains the string to be printed
 *
 *Return: Returns nothing
 *
 */
void _puts(char *str)
{
	int a = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

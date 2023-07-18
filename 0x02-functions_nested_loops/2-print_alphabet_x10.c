#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always (0)
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 *print_line - Prints line according to n
 *
 *@n: The number of time the line is drawn
 *
 *Return: Has no return type
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

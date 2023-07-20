#include "main.h"

/**
 *print_square - Uses has tag to print square
 *
 *@size: The size to be printed
 *Return: Has no return type
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

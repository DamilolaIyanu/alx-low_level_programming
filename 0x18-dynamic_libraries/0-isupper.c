#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function to check uppercase.
 *
 *@c: Collects character
 * Return: Always 0.
 */
int _isupper(int c)
{
	char i;

	int upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{	upper = 1;
			return (upper);
		}
	}
	return (upper);
}

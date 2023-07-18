#include "main.h"
/**
 * _isalpha - Checks if it is alphabet
 *
 * @c: collects alphabet
 * Return: Always (0)
 *
 */

int _isalpha(int c)
{
	char i, j;

	int alpha = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}

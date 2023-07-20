#include "main.h"
/**
 *_isdigit - Checks if digit
 *
 *@c: Collects numbers
 *
 *Return: Always (0)
 */
int _isdigit(int c)
{
	int i;

	int digit = 1;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i == c)
		{
			digit = 0;
			return (0);
		}
	}
	return (digit);
}

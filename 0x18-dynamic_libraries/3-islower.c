#include "main.h"
/**
 *_islower - Entry point
 *
 *@c: collects alphabet
 *
 *Return: Always (0)
 *
 */

int _islower(int c)
{
	char i;

	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}

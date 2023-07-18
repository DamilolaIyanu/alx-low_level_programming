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

	for (i = 'a'; i <= 'z'; i++)
	{
		if ('a' == c)
		{
			return (1);
		}
	}
	return (0);
}

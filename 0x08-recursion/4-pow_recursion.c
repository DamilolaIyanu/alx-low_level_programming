#include "main.h"

/**
 *_pow_recursion - gets the value of x raised to power to y
 *@x: holds the base
 *@y: holds the supercsript
 *Return: Return x raised by y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0 || x < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}

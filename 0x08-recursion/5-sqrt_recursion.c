#include "main.h"

/**
 *sqrt_a - finds the square root of numbers
 *@a: stores number
 *@b: stores number
 *Return: Returns the square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 *_sqrt_recursion - finds the square root of numbers
 *@n: the number whose square root we are calculating
 *Return: returns the square root of the number
 */


int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

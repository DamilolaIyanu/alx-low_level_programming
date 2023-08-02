#include "main.h"

/**
 *factorial - the function returns the factorial of n
 *
 *@n: It holds the number whose factorial we are finding
 *
 *Return: Returns the factorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

#include "main.h"
/**
 *prime - checks if a number is prime or not
 *@a: holds an integer
 *@b: holds another integer
 *
 *Return: Returns either 0 or 1
 */
int prime(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime(a, b + 1));
}
/**
 *is_prime_number - checks if n is prime
 *@n: the number we are checking
 *Return: Returns 0 0r 1
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}

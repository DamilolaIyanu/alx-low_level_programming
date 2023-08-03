#include "main.h"
/**
 *strlen_recursion - counts the length of the string
 *@s: holds the string
 *Return: Returns the length of the string
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + strlen_recursion(s + 1));
	}
}

/**
 *str_comp - compares string a and b
 *@a: holds a string
 *@b: holds the other string
 *@s: holds the string to be checked
 *Return: Returns 0
 */

int str_comp(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + str_comp(s, a + 1, b - 1));
	}
	return (0);
}

/**
 *is_palindrome - checks if a string is empty or not
 *@s: It holds the string we are checking
 *Return: Returns 1 if true otherwise 0
 */


int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (str_comp(s, 0, strlen_recursion(s) - 1));
}

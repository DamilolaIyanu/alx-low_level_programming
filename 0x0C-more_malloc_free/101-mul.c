#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define ER_MSG "Error"
/**
 *nondigit_checker - checks if a digit contains nondigit character
 *@c: the string to be checked
 *Return: Returns 0 on success
 */
int nondigit_checker(char *c)
{
	int a = 0;

	while (c[a])
	{
		if (c[a] < '0' || c[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 *str_len - checks the string length
 *@c: the string
 *Return: Returns the string length
 */
int str_len(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * error - prints error
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *main - finds the product of two integers
 *@argc: argument count
 *@argv: argument vector
 *Return: Returns 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, remain, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !nondigit_checker(s1) || !nondigit_checker(s2))
		error();
	len1 = str_len(s1);
	len2 = str_len(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		remain = 0;
		for (len2 = str_len(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			remain += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = remain % 10;
			remain /= 10;
		}
		if (remain > 0)
			result[len1 + len2 + 1] += remain;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			b = 1;
		if (b)
			_putchar(result[i] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

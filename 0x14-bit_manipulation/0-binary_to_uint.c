#include <stdio.h>
#include "main.h"

/**
 *binary_to_uint - converts binary numbers to unsigned integers
 *@b: the pointer to the string containing the binary numbers
 *Return: returns the unsigned integers
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted_integer = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		converted_integer = converted_integer * 2 + (b[i] - '0');
		i++;
	}
	return (converted_integer);
}

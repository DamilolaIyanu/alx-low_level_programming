#include "main.h"
#include <stdio.h>
/**
 *binary_to_uint - changes binary to unsigned int
 *
 *@b: the pointer to the string containing the characters
 *
 *Return: returns the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}

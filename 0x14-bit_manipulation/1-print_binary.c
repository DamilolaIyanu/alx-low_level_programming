#include <stdio.h>
#include "main.h"
/**
 *print_binary - the the binary rep of a number
 *@n: the integer to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}

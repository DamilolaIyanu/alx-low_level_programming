#include "main.h"
#include <stdio.h>

/**
 *print_binary: prints the binary representation of an unsigned long int
 *
 *@n: the number whose binary rep is to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int setBit = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	while (setBit > 0)
	{
		if ((n & setBit) || start)
		{
			_putchar((n & setBit) ? '1' : '0');
			start = 1;
		}
		setBit >>= 1;
	}

	if (!start)
		_putchar('0');
}

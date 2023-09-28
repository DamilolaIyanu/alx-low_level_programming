#include <stdio.h>
#include "main.h"
/**
 *flip_bits - checks the number of bit to flip to get from
 *one number to the other
 *@n: first parameter
 *@m: second parameter
 *Return: returns the number of bit needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}

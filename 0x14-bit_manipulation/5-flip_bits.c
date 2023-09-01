#include "main.h"
#include <stdio.h>

/**
 *flip_bits - counts and returns the number of bit needed to flip to move from
 *one number to another
 *@n: the first unsigned long int
 *@m: the second unsigned int
 *Return: returns the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		counter += result & 1;
		result >>= 1;
	}
	return (counter);
}

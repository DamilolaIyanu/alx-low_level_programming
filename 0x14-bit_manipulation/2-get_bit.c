#include "main.h"
#include <stdio.h>
/**
 *get_bit - returns the value of bit a a specified index
 *@index: the specified position to find the bit
 *@n: the integer holding the bit
 *Return: the value of bit at the index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include "main.h"
/**
 *set_bit - sets bit at a particular index to 1
 *@n: the number
 *@index: the index of the number we want to set to 1
 *Return: 1 or 0 if successful or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;

	*n |= mask;

	return (1);
}

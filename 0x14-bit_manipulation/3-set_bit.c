#include "main.h"
#include <stdio.h>

/**
 *set_bit - sets the value of bit to 1
 *@n: the pointer to the unsigned long int
 *@index: the position of the integer
 *Return: returns 1 on success and -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;

	return (1);
}

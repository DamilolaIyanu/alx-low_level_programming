#include "main.h"
#include <stdio.h>

/**
 *clear_bit - set the bit to 0
 *@n: pointer to the unsigned long int
 *@index: the position of the unsigned long int
 *Return: returns 1 on success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~clear;

	return (1);
}

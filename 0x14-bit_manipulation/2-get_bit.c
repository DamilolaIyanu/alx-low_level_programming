#include <stdio.h>
#include "main.h"
/**
 *get_bit - gets the value of a bit at given index
 *@n: the unsignedlong integer
 *@index: the index of the number
 *Return: either 1 or 0 on success and -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((int)((n >> index) & 1));
}

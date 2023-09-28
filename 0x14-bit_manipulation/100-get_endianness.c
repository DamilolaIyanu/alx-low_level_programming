#include <stdio.h>
#include "main.h"
/**
 *get_endianness - checks the endianness.
 *Return: returns 0 if big and 1 if little
 */
int get_endianness(void)
{
	unsigned int numb = 1;
	char *byte = (char *)&numb;

	return (*byte);
}

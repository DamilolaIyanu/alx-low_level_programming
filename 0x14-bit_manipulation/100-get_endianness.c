#include "main.h"
#include <stdio.h>

/**
 *get_endianness - checks endianness either little or big
 *
 *Return: returns 0 if big or 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *ptr = (char *)&i;

	return ((int)(*ptr));
}

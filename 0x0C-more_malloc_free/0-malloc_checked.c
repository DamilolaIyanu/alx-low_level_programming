#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function allocates memory using malloc
 *@b: thats the one we are allocating memory for
 *Return: Returns pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

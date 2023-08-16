#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: one of the grid
 *@size: The size of the grid
 *Return: Return pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;
	return (ptr);
}

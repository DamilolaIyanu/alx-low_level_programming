#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates memory
 *using malloc and free
 *@ptr: the old pointer
 *@old_size: the size of the old pointer
 *@new_size: the size of the new pointer
 *Return: Returns the pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t a, b = new_size;
	char *oldp = ptr;
	char *np;

	if (ptr == NULL)
	{
		np = malloc(new_size);
		return (np);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	np = malloc(new_size);
		if (np == NULL)
			return (NULL);
	if (new_size > old_size)
		b = old_size;
	for (a = 0; a < b; a++)
		np[a] = oldp[a];
	free(ptr);
	return (np);
}

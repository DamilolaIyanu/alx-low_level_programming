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
	size_t b, a = new_size;
	char *old = ptr;
	char *np;

	if (new_size == old_size)
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
		a = old_size;
	for (b = 0; b < a; a++)
		np[b] = old[b];
	free(ptr);
	return (np);
}

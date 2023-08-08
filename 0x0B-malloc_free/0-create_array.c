#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array
 *@size: the size of the array
 *@c: the array to be created
 *Return: Returns pointer if success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

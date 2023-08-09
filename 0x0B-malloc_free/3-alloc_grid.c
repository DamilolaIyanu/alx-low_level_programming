#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2 dimensional array
 *@width: the first dimension
 *@height: the second dimension
 *Return: Returns a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
			if (ptr[i] == NULL)
			{
				for (i--; i > 0; i--)
				free(ptr[i]);
				free(ptr);
				return (NULL);
			}

	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}

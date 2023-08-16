#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min: the first container
 *@max: the second container
 *Return: Returns the pointer to the new memory
 */
int *array_range(int min, int max)
{
	int *ar;
	int a, c;

	if (min > max)
		return (NULL);
	c = max - min + 1;
	ar = malloc(sizeof(int) * c);
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < c; a++)
	{
		ar[a] = min;
		min++;
	}
	return (ar);
}

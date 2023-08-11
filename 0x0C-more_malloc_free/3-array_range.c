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
	int a;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * (max - min + 1));
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < ((max - min) + 1); a++)
	{
		ar[a] = min;
		min++;
	}
	return (ar);
}

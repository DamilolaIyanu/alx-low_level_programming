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
	a = 0;
	while (a < (max - min + 1))
	{
		min++;
		ar[a] = min;
	}
	return (ar);
}

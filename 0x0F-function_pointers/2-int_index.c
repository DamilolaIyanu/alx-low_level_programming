#include "function_pointers.h"
#include <stdio.h>

/**
 *int_index - searches for an integer
 *@array: the array to be searched
 *@size: size of the array
 *@cmp: the function pointer
 *Return: Returns 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}

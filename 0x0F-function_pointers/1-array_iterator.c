#include "function_pointers.h"
#include <stdio.h>

/**
 *array_iterator - executes a function given as a parameter
 *@array: the array
 *@size: the size of the array
 *@action: the function pointer
 *Return: Returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(*array);
		array++;
	}
}

#include "main.h"
#include <stdio.h>

/**
 *print_array - prints items of an array
 *
 *@a: the pointer
 *
 *@n: Stores the item
 *return: returns nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - it prints the sum of diagonal integers of an array
 *@a: Stores the integers
 *@size: stores the size of the array
 *Return: Returns nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}

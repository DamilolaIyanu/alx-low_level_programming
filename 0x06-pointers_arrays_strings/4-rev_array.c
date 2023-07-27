#include "main.h"

/**
 * reverse_array - reverses the item in an array
 *
 *@a: store the items
 *
 *@n: no of items
 *
 *Return: Returns nothing
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		n--;
	}
}

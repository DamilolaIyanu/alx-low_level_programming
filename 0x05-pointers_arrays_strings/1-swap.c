#include "main.h"

/**
 *swap_int - swaps the value of a pointer for another
 *
 *@a: stores value
 *
 *@b: stores value
 *
 *return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	int *j = &i;

	*j = *a;
	*a = *b;
	*b = *j;
}

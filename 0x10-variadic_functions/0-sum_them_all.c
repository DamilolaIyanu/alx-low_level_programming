#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - sums all the argument parsed to it
 *@n: constant number
 *Return: Return 0 or result depending on the success
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum, int);
	}
	va_end(sum);
	return (result);
}

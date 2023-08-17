#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - the function prints numbers
 *@separator: the string to be printed
 *@n: the number of integer passed in
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;

	va_list str;

	va_start(str, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			j = va_arg(str, int);
			j++;
			printf("%d", j);
			if (i < n - 1)
				printf(", ");
		}
	}
	va_end(str);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - The function prints strings
 *@separator: the string to be printed between the string
 *@n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(str, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i != (n - 1) && separator != NULL && j != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}

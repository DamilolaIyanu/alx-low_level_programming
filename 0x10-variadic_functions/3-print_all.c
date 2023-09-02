#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_all - prints all argument
 *@format: a list of types passed into the argument
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	const char *format_ptr = format;

	va_list args;
	va_start(args, format);

	while (*format_ptr)
	{
		switch (*format_ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;

			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s",s);
				break;

			default:
				break;
		}

		format_ptr++;
		if (*format_ptr)
			printf(", ");
	}

	printf("\n");
	va_end(args);
}

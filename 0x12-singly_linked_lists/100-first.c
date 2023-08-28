#include <stdio.h>
#include "lists.h"

void _printBeforeMain(void)__attribute__((constructor));
/**
 *_printBeforeMain - prints strings before the main function
 *
 *Return: returns nothing
 */
void _printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

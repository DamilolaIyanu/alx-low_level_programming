#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - The function prints all the elememts of a list
 *@h: the pointer head
 *Return: Return the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;

	size_t count;

	for (count = 0; p != NULL; count++)
	{
		if (p->str == NULL)
		{
			printf("[%u] %s\n", p->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		p = p->next;
	}
	return (count);
}

#include <stdio.h>
#include "lists.h"

/**
 *list_len - finds the list len
 *@h: the pointer head
 *Return: Return the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *g = h;

	while (g != NULL)
	{
		count++;
		g = g->next;
	}
	return (count);
}

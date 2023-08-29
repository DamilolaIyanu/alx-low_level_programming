#include <stdio.h>
#include "lists.h"

/**
 *listint_len - the function returns the elements in a list
 *@h: the member we are counting
 *Return: Returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *i = NULL;

	i = h;

	while (i != NULL)
	{
		count++;
		i = i->next;
	}
	return (count);
}


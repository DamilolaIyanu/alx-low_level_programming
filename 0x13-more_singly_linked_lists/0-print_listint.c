#include <stdio.h>
#include "lists.h"

/**
 *print_listint - prints all the elements of listint_t
 *@h: the head of the list
 *Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *i = h;

	size_t count = 0;

	while (i != NULL)
	{
		printf("%u\n", i->n);
		i = i->next;
		count++;
	}
	return (count);
}

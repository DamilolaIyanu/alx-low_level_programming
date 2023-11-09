#include "lists.h"

/**
 *dlistint_len - function to print the element of a list
 *@h: pointer to the list to be counted
 *Return: returns the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

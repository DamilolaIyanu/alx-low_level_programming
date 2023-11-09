#include "lists.h"

/**
 *print_dlistint - function to print the element of a list
 *@dlistint_t: the list to be printed
 *Return: returns the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}

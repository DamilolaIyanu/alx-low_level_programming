#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - returns the nth node
 *@head: the pointer to the head
 *@index: the index of node
 *Return: the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (n < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		n++;
	}
	return (head);
}

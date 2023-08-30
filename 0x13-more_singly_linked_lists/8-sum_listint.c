#include "lists.h"
#include <stdio.h>

/**
 *sum_listint - the function add all the data in the list
 *@head: the pointer to the firstr node in the list
 *Return: returns the sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int data = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		data += ptr->n;
		ptr = ptr->next;
	}
	return (data);
}

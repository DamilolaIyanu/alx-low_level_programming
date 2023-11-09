#include "lists.h"
/**
 *sum_dlistint - sum all element
 *@head: pointer to the head
 *Return: returns sum
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

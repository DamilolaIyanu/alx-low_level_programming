#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - deletes the first node in the list
 *@head: pointer to the pointer head
 *Return: Returns the data in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;

	int data = ptr->n;

	if (head == NULL || *head == NULL)
		return (0);

	*head = (*head)->next;

	free(ptr);

	return (data);
}

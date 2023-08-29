#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - frees list
 *@head: the pointer to the head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	free(*head);
	*head = NULL;
}

#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - frees the list
 *@head: pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}

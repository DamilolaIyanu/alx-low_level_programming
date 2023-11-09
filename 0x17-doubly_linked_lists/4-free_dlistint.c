#include "lists.h"
/**
 *free_dlistint - frees list
 *@head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *track;

	while (head != NULL)
	{
		track = head;
		head = head->next;
		free(track);
	}
}

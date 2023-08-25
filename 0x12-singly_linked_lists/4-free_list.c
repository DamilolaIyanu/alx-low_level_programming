#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - the function frees memory
 *@head: the list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(temp->str);
		free(head);
	}
	free(head->str);
	free(head);
}

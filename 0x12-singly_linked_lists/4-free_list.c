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
	list_t *next;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}

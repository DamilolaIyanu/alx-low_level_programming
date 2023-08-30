#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes a node at a particular index
 *@head: the pointer to the head pointer
 *@index: the index to insert the node
 *Return: returns 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *temp = *head;
	unsigned int count = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	while (count < index - 1 && temp != 0 && index != 0)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
		return (-1);
	if (index == 0)
		*head = temp->next;
	else
	{
		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}
	return (1);

}

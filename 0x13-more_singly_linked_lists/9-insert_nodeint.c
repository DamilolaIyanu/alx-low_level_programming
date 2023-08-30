#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - function insertnode at index
 *@head: the pointer to the head pointer
 *@idx: the index node is to be inserted
 *@n: the number of nodes
 *Return: returns the pointer to the new node inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i = 0;

	while (i < idx && temp != NULL)
	{
		temp = temp->next;
			i++;
	}

	if (idx > i)
		return (NULL);
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}

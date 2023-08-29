#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of the list
 *@head: the pointer to the head of the list
 *@n: the node we are adding to the list
 *Return: Returns the address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);

}

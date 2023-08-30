#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - reverses a list
 *@head: the pointer to the head pointer
 *Return: return the pointer to the first node of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *later = NULL;

	while (*head != NULL)
	{
		later = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = later;
	}
	*head = prev;

	return (*head);
}

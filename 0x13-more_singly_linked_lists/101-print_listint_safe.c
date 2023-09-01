#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
listint_t *add_node(listint_t **head, int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return(newnode);
}

/**
 *
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = (listint_t *)head;

	size_t nodecount = 0;

	while(current != NULL && current < current->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		nodecount++;
	}
	if (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		nodecount++;
	}
	if (current != NULL && current->next != NULL)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
	}
	printf("Number of nodes: %lu\n", nodecount);
	return (nodecount);
}

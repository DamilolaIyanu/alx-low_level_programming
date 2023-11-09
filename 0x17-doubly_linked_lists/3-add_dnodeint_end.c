#include "lists.h"

/**
 *add_dnodeint_end - adds a node at the end
 *@head: pointer to the head
 *@n: the value of the new node
 *Return: return null or new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	temp = *head;

	new_node->n = n;
	new_node->prev = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);

}

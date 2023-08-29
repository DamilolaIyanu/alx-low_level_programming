#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *makeNode- creates a new node
 *@n: the data in the newNode
 *Return: Returns the newNode
 */
listint_t *makeNode(const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	return (newNode);

}
/**
 *add_nodeint - the function adds a node at the beginning of the list
 *@head: the pointer to the head of the list
 *@n: the data in the node
 *Return: Returns the pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	if (head == NULL)
		return (NULL);

	newNode = makeNode(n);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}

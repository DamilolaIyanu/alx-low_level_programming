#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *make_node - this functionis to create a node
 *@str: the string
 *Return: returns the node created
 */
list_t *make_node(const char *str)
{
	list_t *nunode;

	nunode = (list_t *)malloc(sizeof(list_t));

	if (nunode == NULL)
		return (NULL);

	nunode->str = strdup(str);
	if (nunode->str == NULL)
	{
		free(nunode);
		return (NULL);
	}
	nunode->len = len(str);
	nunode->next = NULL;
	return (nunode);
}
/**
 *len - the length of the string
 *@str: the string
 *Return: Returns the length of the string
 */
int len(const char *str)
{
	int n = 0;

	if (str == NULL)
		return (0);

	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 *add_node_end - this function adds node to the linked list
 *@head: pointer to the head of the node
 *@str: the string in the list
 *Return: Returns the address of the nes node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *counter;
	list_t *nunode;

	counter = *head;

	nunode = make_node(str);

	if (nunode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = nunode;
		return (*head);
	}
	while (counter->next != NULL)
	{
		counter = counter->next;
	}
	counter->next = nunode;
	return (*head);

}

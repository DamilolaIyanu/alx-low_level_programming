#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *len - finds the length of the string
 *@str: the string whose length is to be calculated
 *Return: Returns the length of the string
 */
int len(const char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/**
 *make_node - the function add a new node at the beginning
 *
 *@str: the first element in the list
 *Return: Return the new pointer address or NULL
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
 *add_node - adds the newly created node to the beginning of the list
 *@head: the pointer to the bginning of the list
 *@str: the string in the node
 *Return: Returns the address to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nunode;

	nunode = make_node(str);
	if (nunode == NULL)
		return (NULL);
	nunode->next = *head;
	*head = nunode;

	return (*head);
}

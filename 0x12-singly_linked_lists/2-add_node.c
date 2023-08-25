#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *
 *
 *
 */
size_t count(const char *str)
{
	size_t n = 0;
	while (str[n] != '\0')
	{
		n++;
		return n;
	}
}
/**
 *add_node - the function add a new node at the beginning
 *@head: pointer head
 *@str: the first element in the list
 *Return: Return the new pointer address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;

	newHead = (list_t *)malloc(sizeof(list_t));

	if (newHead == NULL)
		return (NULL);

	newHead->str = strdup(str);
	if (newHead->str == NULL)
		return (NULL);

	newHead->next = *head;
	*head = newHead;
	return (newHead);

}

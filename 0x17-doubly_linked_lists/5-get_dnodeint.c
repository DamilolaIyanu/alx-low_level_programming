#include "lists.h"
/**get_dnodeint_at_index - get the node at specified index
 *@head: pointer to the head
 *@index: the index to get the node
 *Return: returns Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
			return (head);

		head = head->next;
		c++;
	}
	return (NULL);
}

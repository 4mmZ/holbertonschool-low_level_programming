#include "lists.h"

/**
 *get_dnodeint_at_index - function that return a nth node of a linked list
 *@head: pointer to the first node of the list
 *@index: the position from which I want to get the node
 *Return: the new node in a specific position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (head);
	for (; i != index; i++)

	{
		if (index_node->next)
			index_node = index_node->next;
		else
			return (NULL);
	}
	return (index_node);
}

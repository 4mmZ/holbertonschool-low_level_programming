#include "lists.h"

/**
 *add_dnodeint - function that adds a new node at the beginning of a list
 *@n: integrers
 *@head: The pointer to the pointer to the 1st node of the linked list
 *Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nnode = NULL;

	nnode = malloc(sizeof(dlistint_t));

	if (!nnode)
	{
		free(nnode);
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	nnode->prev = NULL;
	if ((*head) != NULL)
	{
		(*head)->prev = nnode;
	}
	*head = nnode;

	return (nnode);
}

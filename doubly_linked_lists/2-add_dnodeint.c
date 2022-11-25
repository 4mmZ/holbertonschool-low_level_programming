#include "lists.h"

/**
 *add_dnodeint - function that adds a new node at the beginning of a list
 *@h: pointer to the first node
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
	*head = nnode;

	return (nnode);
}

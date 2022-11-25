#include "lists.h"
#include "2-add_dnodeint.c"
/**
 *add_dnodeint_end - function that adds a new node at the end of a list.
 *@head: pointer to the pointer to the first node
 *@n: integrers
 *Return: the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;

	if (*head == NULL)
	{
		*head = add_dnodeint(head, n);
		free_dlistint(head);
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = add_dnodeint(&(last->next), n);
	if (!last->next)
		free_dlistint(last->next);
	last->next->prev = last;
	return (last->next);
}

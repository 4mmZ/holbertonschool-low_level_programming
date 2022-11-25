#include "lists.h"
#include "5-get_dnodeint.c"

/**
 *insert_dnodeint_at_index - function that insert a node at the given position.
 *@h: the pointer to the pointer to the first node
 *@idx: index
 *@n: integrers
 *Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *index = *h;

	if (h == NULL)
		return (NULL);
	if (!idx)
		return (add_dnodeint(h, n));
	index = get_dnodeint_at_index(*h, idx - 1);
	if (index == NULL)
		return (NULL);
	newnode = add_dnodeint(&(index->next), n);
	newnode->prev = index;
	return (newnode);
}

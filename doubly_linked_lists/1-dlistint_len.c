#include "lists.h"

/**
 *dlistint_len -  function that returns the number of elements in a linked list
 *@h: pointer to the first node
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}

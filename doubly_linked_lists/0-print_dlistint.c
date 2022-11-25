#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a list.
 *@h: pointer to the head node
 *Return: the numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%d\n", h->n);
	h = h->next;
	j++;
	}
	return (j);
}

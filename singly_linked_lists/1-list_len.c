#include "lists.h"

/**
 *list_len - function that returns the number of elements in a list_t list.
 *@h: the list
 *Return: j
 */


size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}

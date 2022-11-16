#include "lists.h"

/**
 *print_list - function that print the contents of a list
 *@list_t: structure that conatins the list
 *@h: the list
 */

size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		j++;
	}

	return (j);
}

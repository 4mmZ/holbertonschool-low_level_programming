#include "lists.h"






int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		s = head->n + s;
		head = head->next;
	}
	return (s);
}

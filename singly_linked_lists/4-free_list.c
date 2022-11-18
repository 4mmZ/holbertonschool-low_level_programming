#include "lists.h"

/**
 *free_list - functin that free a linked list
 *@head: the start of the linked list
 *Return: void
 */

void free_list(list_t *head)
{

	if (head)
	{
		free_list(head->next);

		if (head->str)
		{
			free(head->str);
		}
	}
	free(head);
}

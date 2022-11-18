#include "lists.h"

/**
*add - function that add a node in the begginin
*@head: the first node of the list
*@str: the string
*Return: newnode
 */


list_t *add(const char *str)
{

	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		free(newnode);
		return (NULL);
	}
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
	return (newnode);

}

/**
 *add_node_end - function that add a node at the end of the list
 *@head: the pointer to the start of the list
 *@str: the string that runs the string
 *Return: last A.K.A the new node sited in the end of the loist
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = *head;
	list_t *endnode = NULL;

	if (last == NULL)
	{
		*head = add(str);
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}

	endnode = add(str);
	last->next = endnode;


	return (last->next);
}

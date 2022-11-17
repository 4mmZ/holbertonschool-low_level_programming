#include "lists.h"
char *_strcpy(char *dest, char *src);

/**
*add_node - function that add a node in the begginin
*@head: the first node of the list
*@str: the string
*Return: newnode
 */


list_t *add_node(list_t **head, const char *str)
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
		newnode->next = *head;
		*head = newnode;

	return (newnode);

}

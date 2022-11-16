#include "lists.h"
char *_strcpy(char *dest, char *src);



list_t *add_node(list_t **head, const char *str)
{

	list_t *newnode = NULL;

	newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);

	if (!head)
	{
		return(NULL);
	}
	else
	{

	}

	new->len = strlen(str);

	return (newnode);
}

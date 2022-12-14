#include "main.h"

/**
 *create_array - the function that inicializes an string
 *@c: a byte of type char
 *@size: an unsigned int
 *Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = NULL;

	if (size)
	{
		str = malloc((sizeof(char) * size));

		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}

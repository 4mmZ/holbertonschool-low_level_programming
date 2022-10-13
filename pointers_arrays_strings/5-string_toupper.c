#include "main.h"
/**
 **string_toupper - the function
 *@i: the pointer
 *Return: 0
 */
char *string_toupper(char *i)
{
	int a;

	for (a = 0; i[a] != '\0'; a++)
	{
		if (i[a] <= 'z' && i[a] >= 'a')
		{
			i[a] = i[a] - 32;
		}

	}
	return (0);
}

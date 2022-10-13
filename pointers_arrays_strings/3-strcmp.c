#include "main.h"

/**
 *_strcmp - the function strcmp
 *@s1: one pointer
 *@s2: another pointer
 *Return: the results of the diferences between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

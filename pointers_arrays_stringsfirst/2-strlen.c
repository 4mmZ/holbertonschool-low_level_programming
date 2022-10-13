#include "main.h"
/**
 *_strlen - char
 *@s: an string
 *Return: the output of c
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s)
	{
		s = s + 1;
		c++;
	}
	return (c);
}

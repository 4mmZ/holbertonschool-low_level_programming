#include "main.h"
/**
 *
 *
 */
int _strlen(char *s)
{
	int c = 0;
	while (*s)
	{
		s = s + 1;
		c++;
	}
	return(c);
}

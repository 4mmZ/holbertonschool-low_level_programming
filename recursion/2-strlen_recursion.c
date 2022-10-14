#include "main.h"
/**
 *
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	
	if (s[0] != '\0')
	{
		_strlen_recursion(s);
		return(*s);
	}
	return(0);
}

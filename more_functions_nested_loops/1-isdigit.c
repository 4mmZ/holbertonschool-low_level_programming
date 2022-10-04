#include "main.h"
/**
 *_isdigit - un digito
 *@c: is a char
 *Return: 1 i fc is a digit and 0 if not 
 *
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

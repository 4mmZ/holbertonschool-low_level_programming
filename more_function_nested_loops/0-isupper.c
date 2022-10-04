#include "main.h"
/**
 *_isupper - uppercase letter
 *@c: c is a letter
 *Return: 1 if (c) is Uppercase, 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

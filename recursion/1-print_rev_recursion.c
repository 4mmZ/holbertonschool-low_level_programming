#include "main.h"
/**
 *_print_rev_recursion - revserse the string
 *@s: the pointer
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}

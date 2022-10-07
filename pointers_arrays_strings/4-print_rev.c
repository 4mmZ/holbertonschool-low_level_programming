#include "main.h"
/**
 *print_rev - prin rev manitou
 *@s: the string
 *Return: the string rev
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (*s)
	{
		c++;
		s = s + 1;
	}
	while (c > 0)
	{
		s = s - 1;
		_putchar(*s);
		c--;
	}
	_putchar(10);
}

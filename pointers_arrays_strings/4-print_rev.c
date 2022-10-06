#include "main.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int c

	while (*s)
	{
		c++;
		s = s + 1;
	}
	while (c > 0)
	{
		c--;
		s = s - 1;
		_putchar(*s);
	}
	_putchar(10);
}

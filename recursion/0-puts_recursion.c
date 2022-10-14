#include "main.h"
/**
 *_puts_recursion - the recursion
 *@s: the pointer
 *Return: (void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
			return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}

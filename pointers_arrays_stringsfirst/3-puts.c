#include "main.h"
/**
 *_puts - char
 *@str: an string
 *Return: nothing
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar(10);
}

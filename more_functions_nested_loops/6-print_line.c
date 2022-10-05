#include "main.h"
/**
 *print_line - a line
 *@n: numbers of time that the barritau will be ecxecuted
 *Return: none
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	if (n <= 0)
	{
		_putchar('\n')
	}
}

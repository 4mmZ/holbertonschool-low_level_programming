#include "main.h"
/**
 *puts_half - print the f**ing half of the string
 *@str: the string
 *Return: the half of the string
 */
void puts_half(char *str)
{
	int c = 0;
	int len = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	len = (c + 1) / 2;
	while (len < c)
	{
		_putchar(str[len]);
		len++;
	}
	_putchar(10);
}

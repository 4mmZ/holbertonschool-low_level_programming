#include "main.h"

/**
 * print_sign - print a ******* letter
 * @n: is a number ( plis somebody kill me i hate C)
 * Return: succes
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

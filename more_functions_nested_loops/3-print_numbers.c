#include "main.h"
/**
 *print_numbers - 0 to 9
 *Return: succes
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}

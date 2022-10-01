#include "main.h"

/**
 *print_alphabet_x10 - i print the aBCdariou ten times
 *Return: Always (0)
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;

	while (n <= 10)
	{
		ch = 'a';
		while ('a' <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar(10);
	n++;
}

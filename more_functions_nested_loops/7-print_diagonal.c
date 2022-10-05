#include "main.h"
/**
 *print_diagonal - una diagonal
 *@n: variable
 *Return: el resultado wn
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0 ; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar(10);

		}
	}
	else
	{
		_putchar(10);
	}
}

#include "main.h"
/**
 *print_square - fuction
 *@size: el tamaño del cuadrado
 *Return: un cuadradO
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 1; y <= size; y++)
		{
			for (x = 1 ; x < size; x++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}

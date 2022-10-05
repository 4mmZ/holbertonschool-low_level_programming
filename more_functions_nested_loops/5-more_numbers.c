#include "main.h"
/**
 *
 *
 *
 *
 */
void more_numbers(void)
{
	int i,n;

	i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
				_putchar((n % 10) + '0);
		}
	_putchar('\n');
	i++;
	}
}

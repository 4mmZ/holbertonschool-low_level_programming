#include "main.h"
/**
 *
 *
 */

int factorial(int n)
{
	int i = 1;

	if (n > 0)
	{
		return (n * factorial(n - i));
	}

	else if (n < 0)
	{
		return (-1);
	}
	return (1);
}

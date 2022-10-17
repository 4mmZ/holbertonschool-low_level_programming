#include "main.h"
/**
 *factorial - the recursion that print the fsctorial number of an 'n' value
 *@n: a value
 *Return: 1
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

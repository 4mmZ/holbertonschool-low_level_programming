#include "main.h"
/**
 *reverse_array - the function
 *@a: the pointer
 *@n: an array
 *Return: succes
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;
	int m;
	int l;

	while (a[n] < n)
	{
		n++;
	}
	l = n;

	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		m = a[i];

		a[i] = a[j];
		a[j] = m;
	}
}

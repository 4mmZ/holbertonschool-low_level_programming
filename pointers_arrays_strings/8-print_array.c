#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		a[n] = a[n + 1];
		printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}

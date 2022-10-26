#include "main.h"

/**
 *array_range - the function that return the range of a array
 *@min: the min value
 *@max: the max value
 *Return: a
 */

int *array_range(int min, int max)
{
	int i = 0, l = 0;
	int *a = NULL;

	if (min || max)
	{
		l = max - min + 1;

		if (min > max)
		{
			return (NULL);
		}

		a = malloc(sizeof(int) * (max - min + 1));

		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < l; i++)
		{
			a[i] = min;
			min++;
		}
	}
	return (a);
}

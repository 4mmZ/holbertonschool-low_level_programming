#include "main.h"

/**
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min || max)
	{
		l = max - min;

		if (min > max)
		{
			return (NULL);
		}
		a = malloc((sizeof(l) + 1));
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < l; i ++)
		{
			a[i] = min;
			if (a[i] > min)
			{
				a[i] = max;
				
			}

		}
	}
	return (a);
}

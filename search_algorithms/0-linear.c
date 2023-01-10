#include "search_algos.h"
#include <stddef.h>

int linear_search(int *array, size_t size, int value)
{
	size_t count;
	int i = 0;

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[i]);
		if (array[i] == value)
		{
                        return (count);
		}
		i++;
	}
	return (-1);
}

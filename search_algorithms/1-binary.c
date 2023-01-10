#include "search_algos.h"


int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i = 0;

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%ld, ", i);
			else
				printf("%ld", i);
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

#include "search_algos.h"

/**
 *binary_search - function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array:  is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: The checked value if is in the array or -1 if it fail
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i = 0;

	if (array == NULL || !value)
		return (-1);
	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}

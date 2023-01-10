#include "search_algos.h"
#include <stddef.h>

/**
 *linear_search - function that searches for a value in an array of integers
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: The checked value if is in the array or -1 if it fail
 */
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

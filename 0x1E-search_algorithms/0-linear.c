#include "search_algos.h"

/**
 * linear_search - Searches in an array using the Linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Index of the value, or -1 on failure.
 */

int linear_search(int *array, size_t size, int value)
{
	int mv = 0;

	if (array == NULL)
		return (-1);

	for (mv = 0; mv < (int)size; mv++)
	{
		printf("Value checked array[%i] = [%i]\n", mv, array[mv]);
		if (array[mv] == value)
			return (mv);
	}
	return (-1);
}

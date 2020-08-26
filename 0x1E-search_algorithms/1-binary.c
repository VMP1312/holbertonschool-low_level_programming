#include "search_algos.h"

/**
 * binary_search - Searches in an array using the  Binary search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: Index of the value, or -1 on failure.
 */

int binary_search(int *array, size_t size, int value)
{
	int first = 0, mid = 0, end = 0, mv = 0;

	if (array == NULL)
		return (-1);

	end = size - 1;

	while (first <= end)
	{
		printf("Searching in array: ");

		for (mv = first; mv < end; mv++)
			printf("%d, ", array[mv]);

	    printf("%d\n", array[mv]);
		mid = (first + end) / 2;

		if (value > array[mid])
			first = mid + 1;

		else if (value < array[mid])
			end = mid - 1;

		else
			return (mid);
	}
	return (-1);
}
#include "function_pointers.h"
/**
 * array_iterator - Funtion that iterate a given parameter.
 * @array: array.
 * @size: size.
 * @action: funtion.
 * Return: Return void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int j;

	j = size;
	if (size <= 0 || array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < j; i++)
	{
		action(array[i]);
	}
}

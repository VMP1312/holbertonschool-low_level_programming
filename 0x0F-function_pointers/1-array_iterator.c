#include "function_pointers.h"

/**
 * array_iterator - 
 *
 * Return: 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int j;
	
	j = size;
	if (size <= 0 || array == NULL)
	{
		return;
	}
	for (i = 0; i < j; i++)
	{
		action(array[i]);
	}
}

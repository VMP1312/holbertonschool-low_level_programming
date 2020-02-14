#include "holberton.h"
/**
 * print_triangle -  Prints a triangle
 * @size: number
 */
void print_triangle(int size)
{
	int width;
	int height;
	int lines;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= (size - height); width++)
			{
				_putchar(' ');
			}
			for (lines = 1; lines <= height; lines++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

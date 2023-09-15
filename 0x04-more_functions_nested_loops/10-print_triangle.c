#include "main.h"
/**
 * print_triangle -  prints a triangle
 * @size: number of character
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (k = i; k < i + 1; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

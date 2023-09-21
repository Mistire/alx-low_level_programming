#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: num
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[n - i]);
	}
	_putchar('\n');


#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: string
 * @n: num2
 */
void print_array(int *a, int n)
{
	int i;
	*a = a[0];

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", *(a + i));
		}
		else if (i != n)
		{
			printf("%d, ", *(a + i));
		}
	}
	printf("\n");
}

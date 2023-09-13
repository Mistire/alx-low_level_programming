#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	int i, fib = 1;

	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", fib);
		fib += i;
	}

	return (0);
}

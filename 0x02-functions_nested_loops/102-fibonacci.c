#include <stdio.h>
/**
 * main - fibonacci
 * Return: 0
 */
int main(void)
{
	int i, fib;

	for (i = 1; i <= 50; i++)
	{
		fib += i;
		printf("%d, ", fib);
	}

	return (0);

#include "main.h"
/**
 * add - adds two numbers
 * @n: number 1
 * @m: number 2
 * Return: the sum of the two numbers
 */
int add(int n, int m)
{
	int s;

	s = n + m;

	if (s > 9)
	{
		_putchar(s / 10 + '0');
		_putchar(s % 10 + '0');
	}
	else
	{
		_putchar(s);
	}
}

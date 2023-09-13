#include "main.h"
/**
 * print_last_digit - prints the last digit
 * Return: value of the last digit
 * @n: value
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	return (n % 10);

	a = n % 10;

	_putchar(a + '0');
	return (a);

	_putchar('\n');
}

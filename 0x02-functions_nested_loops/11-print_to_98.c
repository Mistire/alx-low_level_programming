#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number entered
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{

		for (i = n; i >= 98; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	else if (n == 98)
	{
		return (n);
	}

	else if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');

			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

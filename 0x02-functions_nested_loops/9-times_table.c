#include "main.h"
/**
 * times_table - prints the 9 times table with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (k >= 0 && k < 10)
			{
				_putchar(k + '0');

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

			else if (k != 9)
			{

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}

		}

		_putchar('\n');
	}
}

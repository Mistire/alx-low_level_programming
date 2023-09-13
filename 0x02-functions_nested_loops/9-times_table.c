#include "main.h"
/**
 * times_table - prints the 9 times table with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{

		for (j = 48; j < 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}

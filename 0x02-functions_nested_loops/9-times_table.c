#include "main.h"
/**
 * times_table - prints the 9 times table with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
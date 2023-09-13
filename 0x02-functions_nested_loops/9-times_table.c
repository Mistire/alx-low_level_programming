#include "main.h"
/**
 * times_table - prints the 9 times table with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{

		for (j = 48; j <= 57; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}

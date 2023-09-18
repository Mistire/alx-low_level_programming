#include "main.h"
#include <string.h>
/**
 * puts_half - a function that prints half of a string,
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		for (i = n + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 == 0)
	{
		int m = len / 2;

		for (i = m; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

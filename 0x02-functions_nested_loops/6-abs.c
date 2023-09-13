#include "main.h"
/**
 * _abs - absolute value
 * @n: any integer
 * Return: 0
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (-(n));
	}

	else if (n == 0)
	{
		return (0);
	}

	else if (n > 0)
	{
		return (n);
	}


	_putchar('\n');

	return (0);
}

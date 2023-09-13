#include "main.h"
/**
 * _islower - Checks if it is lowercase
 * @c: character to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

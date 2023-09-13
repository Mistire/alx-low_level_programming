#include "main.h"
/**
 * _islower - Checks if it is lowercase
 * @c: character to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 112)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
